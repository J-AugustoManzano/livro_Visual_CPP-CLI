// C05EX01.cpp

#include "stdafx.h"
using namespace System;

int main()
{
  Single SOMA = 0, MEDIA;
  array<Single>^ MD = gcnew array<Single>(8);
  Int32 I;
  ConsoleKeyInfo TECLA;
  Console::WriteLine("Calculo de media escolar");
  Console::WriteLine();
  for (I = 0; I <= 7; I++)
    {
      Console::Write("Informe a {0}a. nota: ", I + 1);
      MD[I] = Single::Parse(Console::ReadLine());
      SOMA += MD[I];
    }
  MEDIA = SOMA / 8;
  Console::WriteLine();
  Console::WriteLine("Media do grupo = {0, 8}.", MEDIA);
  Console::WriteLine();
  Console::WriteLine("Tecle <Enter> finalizar o programa ...");
  do
    {
      TECLA = Console::ReadKey(true);
    }
  while (TECLA.Key != ConsoleKey::Enter);
  return 0;
}
