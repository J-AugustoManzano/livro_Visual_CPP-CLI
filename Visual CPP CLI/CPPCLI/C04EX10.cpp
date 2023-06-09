// C04EX10.cpp

#include "stdafx.h"
using namespace System;

int main(void)
{
  int I;
  for (I = 10; I >= 1; I--)
    Console::WriteLine("I = {0, 2}", I);
  return 0;
}
