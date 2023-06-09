// C03EX04.cpp

#include "stdafx.h"
using namespace System;

int main()
{
  int NUMERO;
  Console::Write("Entre o valor <B>: ");
  NUMERO = Int32::Parse(Console::ReadLine());
  Console::WriteLine();
  if (NUMERO >= 20 && NUMERO <= 90)
    Console::WriteLine("O valor esta entre 20 e 90");
  else
    Console::WriteLine("O valor nao esta entre 20 e 90.");
  return 0;
}
