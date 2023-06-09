// C07EX07.cpp

#include "stdafx.h"
using namespace System;

void soma(void)
{
  Single A, B, R;
  Console::Write("Entre o valor da variável [A]: ");
  A = Single::Parse(Console::ReadLine());
  Console::Write("Entre o valor da variável [B]: ");
  B = Single::Parse(Console::ReadLine());
  R = A + B;
  Console::WriteLine();
  Console::WriteLine("O resultado entre A e B = {0}", R);
  return;
}

int main(void)
{
  soma();
  return 0;
}

