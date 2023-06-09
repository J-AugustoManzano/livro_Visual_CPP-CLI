// C05EX04.cpp

#include "stdafx.h"
using namespace System;

int main()
{
  Int32 I, J;
  array<Single, 2>^ NOTA = gcnew array<Single, 2>(10, 4);
  ConsoleKeyInfo TECLA;
  Console::WriteLine("Leitura e apresentacao de notas");
  Console::WriteLine();

  // Entrada das notas

  for (I = 0; I <= 9; I++)
    {
      Console::Write("Informe notas do {0, 2}", I + 1, "o. aluno.");
      Console::WriteLine();
      for (J = 0; J <= 3; J++)
        {
          Console::Write("Nota: {0} = ", J + 1);
          NOTA[I, J] = Single::Parse(Console::ReadLine());
        }
    }
  Console::WriteLine();

  // Apresentacao das notas

  for (I = 0; I <= 9; I++)
    {
      Console::WriteLine("As notas do {0, 2}o. aluno sao:", I + 1);
      for (J = 0; J <= 3; J++)
        Console::WriteLine("Nota: {0} = {1, 5}", J + 1, NOTA[I, J]);
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
