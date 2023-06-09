// C06EX11.cpp

#include "stdafx.h"
using namespace System;

typedef Single  Real;
typedef Int32   Integer;
typedef Integer Inteiro;

int main()
{

  Inteiro A;
  Real B;

  Console::Write("Entre um valor inteiro: ");
  A = Inteiro::Parse(Console::ReadLine());
  Console::WriteLine("Foi informado o valor: {0}", A);

  Console::Write("Entre um valor real: ");
  B = Real::Parse(Console::ReadLine());
  Console::WriteLine("Foi informado o valor: {0}", B);

  Console::WriteLine();
  return 0;
}
