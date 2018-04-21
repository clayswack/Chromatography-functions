#include "Class1_com.hpp"
#include <string>

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
  return helpMap;
}

HRESULT __stdcall CClass1::doge() {
  return( CallComFcn( "doge", 0, 0, 0 ) );
}
