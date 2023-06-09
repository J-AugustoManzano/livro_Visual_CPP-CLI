// C04EX11.cpp

#include "stdafx.h"
using namespace System;

int main(void)
{
  int I;
  for (I = 1; I <= 10; I += 2)
    Console::WriteLine("I = {0, 2}", I);
  return 0;
}
