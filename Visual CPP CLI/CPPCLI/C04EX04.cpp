// C04EX04.CPP

#include "stdafx.h"
using namespace System;

int main(void)
{
  int N, I = 1;
  long int FAT = 1;
  Console::WriteLine();
  Console::WriteLine("Programa Fatorial");
  Console::Write("Fatorial de que valor: ");
  N = Int32::Parse(Console::ReadLine());
  while (I <= N)
    {
       FAT *= I;
       I++;
    }
  Console::WriteLine();
  Console::WriteLine("Fatorial de {0} = {1}.", N, FAT);
  return 0;
}
