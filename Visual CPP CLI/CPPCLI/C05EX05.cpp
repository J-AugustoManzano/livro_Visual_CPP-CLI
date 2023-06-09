// C05EX05.cpp

#include "stdafx.h"
using namespace System;

int main()
{
  int I;
  array<String^>^ NOME = gcnew array<String^>(10);
  Console::WriteLine("Leitura e apresentacao de nomes");
  Console::WriteLine();

  // Entrada dos nomes

  for (I = 0; I <= 9; I++)
    {
      Console::Write("Informe o {0, 2}o. nome: ", I + 1);
      NOME[I] = Console::ReadLine();
    }
  Console::WriteLine();

  // Apresentacao dos nomes

  for (I = 0; I <= 9; I++)
    Console::WriteLine("{0, 2}o. nome: {1}", I + 1, NOME[I]);
  return 0;
}
