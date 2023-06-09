// C07EX07.cpp

#include "stdafx.h"
using namespace System;

extern Single A, B;

void soma(void)
{
  Single R;
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
