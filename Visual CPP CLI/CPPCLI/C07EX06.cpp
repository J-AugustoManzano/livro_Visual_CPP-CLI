// C07EX06.cpp
// Verificacao Logica

#include "stdafx.h"
using namespace System;

Boolean compara(Int32 A, Int32 B)
{
  Boolean RESULTADO;
  RESULTADO = (A == B);
  return RESULTADO;
}

int main()
{
  Int32 N1, N2;
  Console::WriteLine("Verificacao Logica");
  Console::WriteLine();
  Console::Write("Entre o 1o. valor: ");
  N1 = Int32::Parse(Console::ReadLine());
  Console::Write("Entre o 2o. valor: ");
  N2 = Int32::Parse(Console::ReadLine());
  if (compara(N1, N2))
    Console::WriteLine("Os numeros sao iguais");
  else
    Console::WriteLine("Os numeros sao diferentes");
  return 0;
}
