// C05EX02.cpp

#include "stdafx.h"
using namespace System;

int main()
{
  int I;
  array<int>^ A = gcnew array<int>(10);
  array<int>^ B = gcnew array<int>(10);
  ConsoleKeyInfo TECLA;
  Console::WriteLine("Exemplo de checagem de indice");
  Console::WriteLine();

  // Entrada de dados

  for (I = 0; I <= 9; I++)
    {
      Console::Write("Informe o valor do {0, 2}o. elemento: ", I + 1);
      A[I] = Int32::Parse(Console::ReadLine());
    }

  // Processamento par ou impar

  for (I = 0; I <= 9; I++)
    if (I % 2 == 0)
      B[I] = A[I] * 5;
    else
      B[I] = A[I] + 5;

  // Apresentacao das matrizes

  for (I = 0; I <= 9; I++)
    {
      Console::Write("A[ {0, 2}] = {1, 3} | ", I + 1, A[I]);
      Console::WriteLine("B[ {0, 2}] = {1, 3}", I + 1, B[I]);
    }
  Console::WriteLine();
  Console::WriteLine("Tecle <Enter> finalizar o programa ...");
  do
    {
      TECLA = Console::ReadKey(true);
    }
  while (TECLA.Key != ConsoleKey::Enter);
  return 0;
}
