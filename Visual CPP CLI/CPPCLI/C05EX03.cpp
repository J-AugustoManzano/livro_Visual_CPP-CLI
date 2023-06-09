// C05EX03.cpp

#include "stdafx.h"
using namespace System;

int main()
{
  int I, SOMA = 0;
  array<int>^ A = gcnew array<int>(5);
  ConsoleKeyInfo TECLA;
  Console::WriteLine("Somatorio de elementos impares");
  Console::WriteLine();

  // Entrada de dados

  for (I = 0; I <= 4; I++)
    {
      Console::Write("Informe o valor do {0, 2}o. elemento: ", I + 1);
      A[I] = Int32::Parse(Console::ReadLine());
    }

  // Processamento par ou impar

  for (I = 0; I <= 4; I++)
    if (A[I] % 2 != 0)
       SOMA += A[I];

  // Apresentacao da soma

  Console::Write("A soma dos elementos equivale a: {0, 4}.", SOMA);
  Console::WriteLine();
  Console::WriteLine("Tecle <Enter> finalizar o programa ...");
  do
    {
      TECLA = Console::ReadKey(true);
    }
  while (TECLA.Key != ConsoleKey::Enter);
  return 0;
}
