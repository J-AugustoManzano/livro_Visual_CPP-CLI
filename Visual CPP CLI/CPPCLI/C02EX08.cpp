// C02EX08.cpp

#include "stdafx.h"
using namespace System;

int main()
{
  int VALOR, RESULTADO;
  VALOR = 1;	
  RESULTADO = VALOR++;
  Console::WriteLine(RESULTADO);
  Console::WriteLine(VALOR);
  return 0;
}
