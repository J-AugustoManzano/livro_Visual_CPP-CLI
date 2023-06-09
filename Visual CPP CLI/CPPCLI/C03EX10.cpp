// C03EX10.cpp

#include "stdafx.h"
using namespace System;

int main()
{
  int MES;
  Console::Write("Entre um numero equivalente a um MES: ");
  MES = Int32::Parse(Console::ReadLine());
  Console::WriteLine();
  if (MES ==  1)
    Console::WriteLine("Janeiro");
  else if (MES ==  2)
    Console::WriteLine("Fevereiro");
  else if (MES ==  3)
    Console::WriteLine("Marco");
  else if (MES ==  4)
    Console::WriteLine("Abril");
  else if (MES ==  5)
    Console::WriteLine("Maio");
  else if (MES ==  6)
    Console::WriteLine("Junho");
  else if (MES ==  7)
    Console::WriteLine("Julho");
  else if (MES ==  8)
    Console::WriteLine("Agosto");
  else if (MES ==  9)
    Console::WriteLine("Setembro");
  else if (MES == 10)
    Console::WriteLine("Outubro");
  else if (MES == 11)
    Console::WriteLine("Novembro");
  else if (MES == 12)
    Console::WriteLine("Dezembro");
  else 
    Console::WriteLine("Mes invalido");
  return 0;
}
