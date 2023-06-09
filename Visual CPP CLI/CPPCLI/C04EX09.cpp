// C04EX09.cpp

#include "stdafx.h"
using namespace System;

int main(void)
{
  int N, I;
  long int FAT = 1;
  Console::WriteLine();
  Console::WriteLine("Programa Fatorial");
  Console::Write("Fatorial de que valor: ");
  N = Int32::Parse(Console::ReadLine());
  for (I = 1; I <= N; I++)
    FAT *= I;
  Console::WriteLine();
  Console::WriteLine("Fatorial de {0} = {1}.", N, FAT);
  return 0;
}
