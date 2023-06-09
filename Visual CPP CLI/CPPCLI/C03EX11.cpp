// C03EX11.cpp

#include "stdafx.h"
using namespace System;

int main()
{
  int MES;
  Console::Write("Entre um numero equivalente a um MES: ");
  MES = Int32::Parse(Console::ReadLine());
  Console::WriteLine();
  switch (MES)
    {
      case  1: Console::WriteLine("Janeiro");      break;
      case  2: Console::WriteLine("Fevereiro");    break;
      case  3: Console::WriteLine("Marco");        break;
      case  4: Console::WriteLine("Abril");        break;
      case  5: Console::WriteLine("Maio");         break;
      case  6: Console::WriteLine("Junho");        break;
      case  7: Console::WriteLine("Julho");        break;
      case  8: Console::WriteLine("Agosto");       break;
      case  9: Console::WriteLine("Setembro");     break;
      case 10: Console::WriteLine("Outubro");      break;
      case 11: Console::WriteLine("Novembro");     break;
      case 12: Console::WriteLine("Dezembro");     break;
      default: Console::WriteLine("Mes invalido"); break;
    }
  return 0;
}
