// C03EX05.cpp

#include "stdafx.h"
using namespace System;

int main()
{
  int CODIGO;
  Console::Write("Entre o codigo de acesso: ");
  CODIGO = Int32::Parse(Console::ReadLine());
  Console::WriteLine();
  if (CODIGO == 1 || CODIGO == 2 || CODIGO == 3)
    {
      if (CODIGO == 1)
        Console::WriteLine("Foi acionado o codigo: um.");
      if (CODIGO == 2)
        Console::WriteLine("Foi acionado o codigo: dois."); 
      if (CODIGO == 3)
        Console::WriteLine("Foi acionado o codigo: tres.");
    }
  else
    Console::WriteLine("Codigo invalido.");
  return 0;
}
