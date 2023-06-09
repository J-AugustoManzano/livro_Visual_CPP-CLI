// C07EX03.cpp
// Programa Fatorial

#include "stdafx.h"
using namespace System;

void fatorial(UInt16 N)
{
  UInt16 I;
  UInt64 FAT = 1;
  for (I = 1; I <= N; I++)
    FAT *= I;
  Console::WriteLine("Fatorial de {0} = a: {1}", N, FAT);
  return;
}

int main(void)
{
  Int32 X, Y;
  Console::WriteLine("Calculo de fatorial");
  Console::WriteLine();

  Console::Write("Entre um valor inteiro: ");
  X = Int32::Parse(Console::ReadLine());
  fatorial(X);

  Console::Write("Entre um valor inteiro: ");
  Y = Int32::Parse(Console::ReadLine());
  fatorial(Y);
  fatorial(9);
  fatorial(6);
  return 0;
}
