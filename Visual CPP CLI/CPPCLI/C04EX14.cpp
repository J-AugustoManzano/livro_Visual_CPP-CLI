// C04EX14.cpp

#include "stdafx.h"
using namespace System;

int main()
{
  Int32 N, I, R;
  Console::Write("Entre o valor da tabuada: ");
  N = Int32::Parse(Console::ReadLine());
  Console::WriteLine();
  I = 1;
  loop:
    R = N * I;
    Console::WriteLine("{0, 2} X {1, 2} = {2, 3}", N, I, R);
    if (I > 9) goto endloop;  
    ++I;
    goto loop;
  endloop:
  return 0;
}
