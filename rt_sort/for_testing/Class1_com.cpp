#include "Class1_com.hpp"
#include <string>

const wchar_t * CClass1::rt_sort_help = L" load data with retention times from compounds in standard A and B\
\n {standard, compound, retention time (min), peak area (uV*s)}\
\n ex. {'A', 'C8:0', 5.217, 6.4817e4}\
\n first row header has to be included for now";
std::map<std::string, const wchar_t*> CClass1::help_map = createHelpMap();
CClass1::CClass1()
{
  g_pModule->InitializeComponentInstanceEx(&m_hinst);
}
CClass1::~CClass1()
{
  if (m_hinst)
    g_pModule->TerminateInstance(&m_hinst);
}
HRESULT __stdcall CClass1::get_help(/*[in]*/ BSTR bstrName, /*[out, retval*/ BSTR* pbstrText)
{
  int wslen = SysStringLen(bstrName);
  int len = ::WideCharToMultiByte(CP_ACP, 0, (wchar_t*)bstrName, wslen, NULL, 0, NULL, NULL);
  std::string strName(len, '\0');
  len = ::WideCharToMultiByte(CP_ACP, 0 /* no flags */,
	                         (wchar_t*)bstrName, wslen /* not necessary NULL-terminated */,
	                         &strName[0], len,
	                         NULL, NULL /* no default char */);
  const wchar_t* help = help_map[strName];
  if (help != NULL)
  {
    *pbstrText = SysAllocString(help);
  }
  else
  {
    *pbstrText = SysAllocString(L"");
  }
  return S_OK;
}
std::map<std::string, const wchar_t*> CClass1::createHelpMap()
{
  std::map<std::string, const wchar_t*> helpMap;
  helpMap["rt_sort"] = rt_sort_help;
  return helpMap;
}

HRESULT __stdcall CClass1::rt_sort(/*[in]*/long nargout, /*[in,out]*/VARIANT* out, 
                                   /*[in]*/VARIANT stds, /*[in]*/VARIANT sample, 
                                   /*[in]*/VARIANT threshold) {
  return( CallComFcn( "rt_sort", (int) nargout, 1, 3, out, &stds, &sample, &threshold ) );
}
