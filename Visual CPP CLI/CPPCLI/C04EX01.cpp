// C04EX01.cpp

#include "stdafx.h"
using namespace System;

int main(void)
{
  int N, I, R;
  Console::Write("Entre o valor da tabuada: ");
  N = Int32::Parse(Console::ReadLine());
  Console::WriteLine();
  I = 1;
  while (I <= 10)
    {
      R = N * I;
      Console::WriteLine("{0, 2} X {1, 2} = {2, 3}", N, I, R);
      I = I + 1;
    }
  return 0;
}
