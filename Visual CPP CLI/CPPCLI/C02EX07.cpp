// C02EX07.cpp

#include "stdafx.h"
using namespace System;

int main()
{
  int R, A, B1 = 0, B2 = 0;

  Console::Write("Entre o valor para a variavel <A>: ");
  A = Int32::Parse(Console::ReadLine());
  R = A + B1++;
  Console::WriteLine();
  Console::WriteLine("R = {0}", R);
  R = A + B1++;
  Console::WriteLine();
  Console::WriteLine("R = {0}", R);

  Console::Write("Entre o valor para a variavel <A>: ");
  A = Int32::Parse(Console::ReadLine());
  R = A + ++B2;
  Console::WriteLine();
  Console::WriteLine("R = {0}", R);
  R = A + ++B2;
  Console::WriteLine();
  Console::WriteLine("R = {0}", R);

  return 0;
}
