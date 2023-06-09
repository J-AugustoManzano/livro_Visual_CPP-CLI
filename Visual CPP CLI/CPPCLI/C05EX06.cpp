// C05EX06.cpp

#include "stdafx.h"
using namespace System;

int main()
{
  int I;
  array<int>^ A = gcnew array<int>(5);
  Console::WriteLine("Leitura e apresentacao ordenada de valores");
  Console::WriteLine();

  // Entrada dos valores

  for (I = 0; I <= 4; I++)
    {
      Console::Write("Informe o valor do {0}o. elemento: ", I + 1);
      A[I] = Int32::Parse(Console::ReadLine());
    }
  Console::WriteLine();

  // Classificacao dos valores

  Array::Sort(A);

  // Apresentacao dos valores

  for (I = 4; I >= 0; I--)
    Console::WriteLine("A[{0}] = {1, 3}", I + 1, A[I]);

  return 0;
}
