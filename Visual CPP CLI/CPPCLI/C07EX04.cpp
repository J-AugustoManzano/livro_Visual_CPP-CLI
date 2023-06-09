// C07EX04.cpp
// Programa Fatorial

#include "stdafx.h"
using namespace System;

void fatorial(UInt16 N, UInt64 %FAT)
{
  UInt16 I;
  FAT = 1;
  for (I = 1; I <= N; I++)
    FAT *= I;
  return;
}

int main(void)
{
  Int32 X;
  UInt64 Y;
  Console::WriteLine("Calculo de fatorial");
  Console::WriteLine();
  Console::Write("Entre um valor inteiro: ");
  X = Int32::Parse(Console::ReadLine());
  fatorial(X, Y);
  Console::WriteLine("Fatorial de {0} = a: {1}", X, Y);
  return 0;
}
