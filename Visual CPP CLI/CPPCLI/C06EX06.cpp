// C06EX06.cpp

#include "stdafx.h"
using namespace System;

int main()
{

  // Definicao da estrutura de enumeracao

  enum MESES
    {
      janeiro,
      fevereiro,
      marco,
      abril,
      maio,
      junho,
      julho,
      agosto,
      setembro,
      outubro,
      novembro,
      dezembro
    };

  MESES MES;
  Int32 REF;

  Console::WriteLine("Teste de acesso a lista enumerada");
  Console::WriteLine();

  MES = janeiro;
  REF = MES;

  Console::Write("Mes {0} = ", REF);
	
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
