// C05EX10.cpp

#include "stdafx.h"
using namespace System;

int main()
{
  Int32 SOMA(0);
  array<Int32>^ A = {9, 8, 7, 6, 5};
  interior_ptr<Int32> INICIO_DO_PONTEIRO(&A[0]);
  interior_ptr<Int32> FIM_DO_PONTEIRO(&A[A->Length - 1]);

  while (INICIO_DO_PONTEIRO <= FIM_DO_PONTEIRO)
    SOMA += *INICIO_DO_PONTEIRO++;

  Console::WriteLine(SOMA);

  return 0;
}
