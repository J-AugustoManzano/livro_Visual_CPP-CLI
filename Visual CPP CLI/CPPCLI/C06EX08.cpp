// C06EX08.CPP

#include "stdafx.h"
using namespace System;

#define janeiro   1
#define fevereiro 2
#define marco     3
#define abril     4
#define maio      5
#define junho     6
#define julho     7
#define agosto    8
#define setembro  9
#define outubro  10
#define novembro 11
#define dezembro 12

int main()
{

  Int32 MES;

  Console::WriteLine("Teste de acesso a lista enumerada simulada");
  Console::WriteLine();
  Console::Write("Entre um mes valido entre 1 e 12: ");
  MES = Int32::Parse(Console::ReadLine());
  Console::WriteLine();
  Console::Write("Mes definido {0} = ", MES);

  switch(MES)
    {
      case janeiro   : Console::Write("janeiro");   break;
      case fevereiro : Console::Write("fevereiro"); break;
      case marco     : Console::Write("marco");     break;
      case abril     : Console::Write("abril");     break;
      case maio      : Console::Write("maio");      break;
      case junho     : Console::Write("junho");     break;
      case julho     : Console::Write("julho");     break;
      case agosto    : Console::Write("agosto");    break;
      case setembro  : Console::Write("setembro");  break;
      case outubro   : Console::Write("outubro");   break;
      case novembro  : Console::Write("novembro");  break;
      case dezembro  : Console::Write("dezembro");  break;
    }
  Console::WriteLine();
  Console::WriteLine();

  return 0;
}
