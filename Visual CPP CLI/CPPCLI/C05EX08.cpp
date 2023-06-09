// C05EX08.cpp

#include "stdafx.h"
using namespace System;

int main()
{
  int I, POSICAO;
  String^ RESP;
  String^ PESQ;
  array<String^>^ NOME = gcnew array<String^>(10);
  Console::WriteLine("Leitura e pesquisa de nomes");
  Console::WriteLine();

  // Entrada das notas

  for (I = 0; I <= 9; I++)
    {
      Console::Write("Informe o {0, 2}o. nome: ", I + 1);
      NOME[I] = Console::ReadLine();
    }
  Console::WriteLine();

  // Apresentacao dos nomes

  do
    {
      Console::Write("Entre nome a ser pesquisado: ");
      PESQ = Console::ReadLine();
      POSICAO = Array::BinarySearch(NOME, PESQ);
      if (POSICAO >= 0)
        Console::Write("{0} achado na posicao {1}", PESQ, POSICAO);
      else
        Console::Write("{0} nao foi localizado", PESQ);
      Console::WriteLine();
      Console::Write("Continua? [S]IM/[N]AO + <Enter>: ");
      RESP = Console::ReadLine();
    }
  while (RESP == "S"  || RESP == "s");
  return 0;
}
