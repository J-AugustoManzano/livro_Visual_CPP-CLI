// C03EX03.cpp

#include "stdafx.h"
using namespace System;

int main()
{
  int A, B, R;
  Console::Write("Entre o valor <A>: ");
  A = Int32::Parse(Console::ReadLine());
  Console::Write("Entre o valor <B>: ");
  B = Int32::Parse(Console::ReadLine());
  Console::WriteLine();
  R = A + B;
  if (R >= 10)
    Console::WriteLine("Resultado = {0}.", R + 5);
  else
    Console::WriteLine("Resultado = {0}.", R - 7);
  return 0;
}
