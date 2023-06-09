// C07EX10.cpp

#include "stdafx.h"
using namespace System;

void incremento()
{
  static Int32 R = 1;
  Console::WriteLine("R = {0}", R);
  R++;
  return;
}

int main()
{
  for(Int32 I = 1; I <= 10; I++)
    incremento();
  return 0;
}
