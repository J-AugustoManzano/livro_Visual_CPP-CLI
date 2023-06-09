// C04EX08.cpp

#include "stdafx.h"
using namespace System;

int main(void)
{
  int N, I, R;
  Console::Write("Entre o valor da tabuada: ");
  N = Int32::Parse(Console::ReadLine());
  Console::WriteLine();
  for (I = 1; I <= 10; I++)
    {
      R = N * I;
      Console::WriteLine("{0, 2} X {1, 2} = {2, 3}", N, I, R);
    }
  return 0;
}
