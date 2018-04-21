#include "Class1_com.hpp"
#include <string>

const wchar_t * CClass1::fa_conc_help = L" Input data \"sorted\" should be cell with this header:\
\n (compound, rt, area)_std -- (rt, area)_sample";
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
  helpMap["fa_conc"] = fa_conc_help;
  return helpMap;
}

HRESULT __stdcall CClass1::fa_conc(/*[in]*/long nargout, /*[in,out]*/VARIANT* out, 
                                   /*[in]*/VARIANT sorted, /*[in]*/VARIANT mass) {
  return( CallComFcn( "fa_conc", (int) nargout, 1, 2, out, &sorted, &mass ) );
}
