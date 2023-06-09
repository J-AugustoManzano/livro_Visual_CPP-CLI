// C02EX04.cpp

#include "stdafx.h"
using namespace System;

int main()
{
  Single HT, VH, PD, TD, SB, SL;
  Console::Write("Entre a quantidade de horas trabalhadas ...: ");
  HT = Single::Parse(Console::ReadLine());
  Console::Write("Entre o valor da hora de trabalho .........: ");
  VH = Single::Parse(Console::ReadLine());
  Console::Write("Entre o valor do percentual de desconto ...: ");
  PD = Single::Parse(Console::ReadLine());
  SB = HT * VH;
  TD = (PD / 100) * SB;
  SL = SB - TD;
  Console::WriteLine();
  Console::WriteLine("Salario Bruto ....: {0}", SB);
  Console::WriteLine("Desconto .........: {0}", TD);
  Console::WriteLine("Salario Liquido ..: {0}", SL);
  return 0;
}
