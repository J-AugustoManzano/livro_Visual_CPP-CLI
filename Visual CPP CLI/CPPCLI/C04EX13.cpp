// C04EX13.cpp

#include "stdafx.h"
using namespace System;

int main()
{

  String^ ENTRADA;
  Int32 SOMA = 0;
  Console::WriteLine();
  Console::Write("Entre uma frase: ");
  ENTRADA = Console::ReadLine();

  for (Int32 I = 0; I <= ENTRADA->Length; I++)
    ENTRADA = ENTRADA->ToUpper();

  for each (Char CARACTERE in ENTRADA)
    if (CARACTERE == 'A')
      SOMA += 1;

  Console::WriteLine("Total de caracteres 'A' = {0, 2}", SOMA);
  return 0;

}
