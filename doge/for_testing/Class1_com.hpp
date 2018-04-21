#ifndef _doge_Class1_com_HPP
#define _doge_Class1_com_HPP 1

#include <windows.h>
#include "doge_idl.h"
#include "mclmcrrt.h"
#include "mclcom.h"
#include "mclxlmain.h"
#include "mclcomclass.h"

class CClass1 : public CMCLClassImpl<IClass1, &IID_IClass1, CClass1, &CLSID_Class1>
{
public:
  CClass1();
  ~CClass1();
  HRESULT __stdcall get_help(/*[in]*/ BSTR funcname, /*[out, retval*/ BSTR* text);

  HRESULT __stdcall doge(); 
private:
  static std::map<std::string, const wchar_t*> help_map;
  static std::map<std::string, const wchar_t*> createHelpMap();
};
#endif
