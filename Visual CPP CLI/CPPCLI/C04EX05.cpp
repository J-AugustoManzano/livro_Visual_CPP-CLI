// C04EX05.CPP

#include "stdafx.h"
using namespace System;

int main(void)
{
  int N, I, R;
  Console::Write("Entre o valor da tabuada: ");
  N = Int32::Parse(Console::ReadLine());
  Console::WriteLine();
  I = 1;
  do
    {
      R = N * I;
      Console::WriteLine("{0, 2} X {1, 2} = {2, 3}", N, I, R);
      I++;
    }
  while (I <= 10);
  return 0;
}
