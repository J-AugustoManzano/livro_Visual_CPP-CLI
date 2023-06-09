// C07EX05.cpp
// Programa Fatorial

#include "stdafx.h"
using namespace System;

UInt64 fatorial(UInt16 N)
{
  UInt16 I;
  UInt64 FAT = 1;
  for (I = 1; I <= N; I++)
    FAT *= I;
  return FAT;
}

int main(void)
{
  Int32 X;
  Console::WriteLine("Calculo de fatorial");
  Console::WriteLine();
  Console::Write("Entre um valor inteiro: ");
  X = Int32::Parse(Console::ReadLine());
  Console::WriteLine("Fatorial de {0} = a: {1}", X, fatorial(X));
  return 0;
}