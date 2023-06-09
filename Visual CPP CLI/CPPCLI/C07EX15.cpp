// C07EX15.cpp

#include "stdafx.h"
using namespace System;

Int32 VALOR = 3;

namespace escopo1
{
  Int32 VALOR = 2;
  namespace escopo2
  {
    Int32 VALOR = 1;
  }
}

int main()
{

  Int32 VALOR = 4;

  Console::WriteLine(VALOR);
  Console::WriteLine(::VALOR);
  Console::WriteLine(escopo1::VALOR);
  Console::WriteLine(escopo1::escopo2::VALOR);

  return 0;
}
