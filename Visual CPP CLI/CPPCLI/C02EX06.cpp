// C02EX06.cpp

#include "stdafx.h"
using namespace System;

int main()
{
  int QUOCIENTE, DIVIDENDO, DIVISOR, RESTO;
  Console::Write("Entre o valor do dividendo ...: ");
  DIVIDENDO = Int32::Parse(Console::ReadLine());
  Console::Write("Entre o valor do divisor .....: ");
  DIVISOR = Int32::Parse(Console::ReadLine());
  QUOCIENTE = DIVIDENDO / DIVISOR;
  RESTO = DIVIDENDO % DIVISOR;
  Console::WriteLine();
  Console::WriteLine("Quociente = {0, 8}", QUOCIENTE);
  Console::WriteLine("Resto     = {0, 8}", RESTO);
  return 0;
}
