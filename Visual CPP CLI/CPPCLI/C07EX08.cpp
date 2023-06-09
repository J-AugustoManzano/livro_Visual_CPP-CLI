// C07EX08.cpp

#include "stdafx.h"
using namespace System;

Single A, B, R;

void soma(void)
{
  R = A + B;
  return;
}

int main(void)
{
  Console::Write("Entre o valor da variável [A]: ");
  A = Single::Parse(Console::ReadLine());
  Console::Write("Entre o valor da variável [B]: ");
  B = Single::Parse(Console::ReadLine());
  soma();
  Console::WriteLine();
  Console::WriteLine("O resultado entre A e B = {0}", R);
  return 0;
}
