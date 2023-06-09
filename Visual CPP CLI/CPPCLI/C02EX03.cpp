// C02EX03.cpp

#include "stdafx.h"
using namespace System;

int main()
{
  Int32 A, B, R;
  Console::Write("Informe um valor para a variavel <A>: ");
  A = Int32::Parse(Console::ReadLine());
  Console::Write("Informe um valor para a variavel <B>: ");
  B = Int32::Parse(Console::ReadLine());
  R = A + B;
  Console::WriteLine("Resultado = {0}", R);
  return 0;
}
