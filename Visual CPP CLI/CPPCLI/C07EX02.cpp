// C07EX02.cpp
// Programa Calculadora

#include "stdafx.h"
using namespace System;

Single R, A, B;

void pausa()
{
  ConsoleKeyInfo TECLA;
  Console::WriteLine();
  Console::Write("Tecle <Enter> finalizar o programa ...");
  do
    {
      TECLA = Console::ReadKey(true);
    }
  while (TECLA.Key != ConsoleKey::Enter);
  return;
}

void entrada()
{
  Console::WriteLine();
  Console::Write("Entre um valor para a variavel [A]: ");
  A = Single::Parse(Console::ReadLine());
  Console::Write("Entre um valor para a variavel [B]: ");
  B = Single::Parse(Console::ReadLine());
  return;
}

void saida()
{
  Console::WriteLine();
  Console::WriteLine("O resultado entre A e B = {0}", R);
  pausa();
  return;
}

void rotadicao()
{
  Console::Clear();
  Console::WriteLine("Rotina de Adicao");
  Console::WriteLine("----------------");
  entrada();
  R = A + B;
  saida();
  return;
}

void rotsubtracao()
{
  Console::Clear();
  Console::WriteLine("Rotina de Subtracao");
  Console::WriteLine("-------------------");
  entrada();
  R = A - B;
  saida();
  return;
}

void rotmultiplicacao(void)
{
  Console::Clear();
  Console::WriteLine("Rotina de Multiplicação");
  Console::WriteLine("-----------------------");
  entrada();
  R = A * B;
  saida();
  return;
}

void rotdivisao(void)
{
  Console::Clear();
  Console::WriteLine("Rotina de Divisao");
  Console::WriteLine("-----------------");
  entrada();
  if (B == 0)
    {
      Console::WriteLine();
      Console::WriteLine("Erro de divisao");
      pausa();
    }
  else
    {
      R = A / B;
      saida();
    }
  return;
}

int main()
{
  Int32 OPCAO = 0;
  while (OPCAO != 5)
    {
      Console::Clear();
      Console::WriteLine("Programa Calculadora");
      Console::WriteLine();
      Console::WriteLine("Menu Principal");
      Console::WriteLine();
      Console::WriteLine("[1] - Adicao");
      Console::WriteLine("[2] - Subtracao");
      Console::WriteLine("[3] - Multiplicacao");
      Console::WriteLine("[4] - Divisao");
      Console::WriteLine("[5] - Fim de Programa");
      Console::WriteLine();
      Console::Write("Escolha uma opcao: ");
      OPCAO = Int32::Parse(Console::ReadLine());
      if (OPCAO != 5)
        {
          switch (OPCAO)
            {
              case 1: rotadicao();        break;
              case 2: rotsubtracao();     break;
              case 3: rotmultiplicacao(); break;
              case 4: rotdivisao();       break;
            }
        }
    }
  return 0;
}
