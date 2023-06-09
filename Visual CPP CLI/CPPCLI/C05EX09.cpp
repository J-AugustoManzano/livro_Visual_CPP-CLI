// C05EX09.cpp

#include "stdafx.h"
using namespace System;

int main()
{
  int I, SOMA = 0;
  array<int>^ A = {9, 8, 7, 6, 5};

  // Ordenacao

  Array::Sort(A);

  // Apresentacao da soma

  for (I = 0; I <= 4; I++)
    Console::WriteLine("{0, 2}o. elemento: {1}", I + 1, A[I]);

  return 0;
}
