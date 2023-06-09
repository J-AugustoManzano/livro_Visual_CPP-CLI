// C02EX02.cpp

#include "stdafx.h"
using namespace System;

int main()
{
  String^ NOME;
  Console::Write("Informe seu nome: ");
  NOME = Console::ReadLine();
  Console::Write("Ola, ");
  Console::WriteLine(NOME);
  return 0;
}
