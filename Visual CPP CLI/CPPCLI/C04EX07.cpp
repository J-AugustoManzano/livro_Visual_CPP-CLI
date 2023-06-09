// C04EX07.cpp

#include "stdafx.h"
using namespace System;

int main(void)
{
  Int32 N, I = 1;
  Int64 FAT = 1;
  Console::WriteLine();
  Console::WriteLine("Programa Fatorial");
  Console::Write("Fatorial de que valor: ");
  N = Int32::Parse(Console::ReadLine());
  do
    {
       FAT *= I;
       I++;
    }
  while (I <= N);
  Console::WriteLine();
  Console::WriteLine("Fatorial de {0} = {1}.", N, FAT);
  return 0;
}
