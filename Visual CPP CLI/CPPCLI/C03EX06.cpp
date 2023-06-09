// C03EX06.cpp

#include "stdafx.h"
using namespace System;

int main()
{
  float A, B, C, X;
  Console::Write("Entre o valor <A>: ");
  A = Single::Parse(Console::ReadLine());
  Console::Write("Entre o valor <B>: ");
  B = Single::Parse(Console::ReadLine());
  Console::Write("Entre o valor <x>: ");
  X = Single::Parse(Console::ReadLine());
  Console::WriteLine();
  if (!(X > 5))
    C = (A + B) * X;
  else
    C = (A - B) * X;
  Console::WriteLine("Resultado de C = {0, 5}. ", C);
  return 0;
}
