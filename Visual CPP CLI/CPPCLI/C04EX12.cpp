// C04EX12.CPP

#include "stdafx.h"
using namespace System;

int main(void)
{
  int A, B, R;
  for (A = 1, B = 1; A + B <= 15; A += 2, B++)
    {
      R = A + B;
      Console::WriteLine("I = {0, 2}", R);
    }
  return 0;
}
