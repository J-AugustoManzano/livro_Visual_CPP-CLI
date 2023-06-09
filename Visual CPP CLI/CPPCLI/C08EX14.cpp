// C08EX14.cpp

#include "stdafx.h"
using namespace System;

Int64 somatorio(Int32 N)
{
  Int64 S = 0;
  for (Int32 I = 1; I <= N; I++)
    S += I;
  return S;
}

Int64 fatorial(Int32 N)
{
  Int64 F = 1;
  for (Int32 I = 1; I <= N; I++)
    F *= I;
  return F;
}

typedef Int64 (PONTEIRO_FUNCAO)(Int32);

int main()
{
  Int32 ENTRA;
  PONTEIRO_FUNCAO *RESPOSTA;

  ENTRA = Int32::Parse(Console::ReadLine());

  RESPOSTA = somatorio;
  Console::WriteLine(RESPOSTA(ENTRA));

  RESPOSTA = fatorial;
  Console::WriteLine(RESPOSTA(ENTRA));

  return 0;
}
