// C03EX02.cpp

#include "stdafx.h"
using namespace System;

int main()
{
  int A, B, X;
  Console::Write("Entre o primeiro valor ...: ");
  A = Int32::Parse(Console::ReadLine());
  Console::Write("Entre o segundo valor ....: ");
  B = Int32::Parse(Console::ReadLine());
  Console::WriteLine();
  if (A > B)
    {
      X = A;
      A = B;
      B = X;
    }
  Console::WriteLine("Os valores ordenados sao: {0} e {1}.", A, B);
  return 0;
}
