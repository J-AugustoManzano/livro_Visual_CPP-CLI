// C03EX09.cpp

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
  R = (A > B) ? A : B;
  Console::WriteLine("O maior valor informado e: {0}", R);
  return 0;
}
