// C03EX08.cpp

#include "stdafx.h"
using namespace System;

int main()
{
  float A, B, R;
  int OPCAO;
  Console::Write("Entre o valor <A>: ");
  A = Single::Parse(Console::ReadLine());
  Console::Write("Entre o valor <B>: ");
  B = Single::Parse(Console::ReadLine());
  Console::WriteLine();
  Console::WriteLine("[1] - Adicao");
  Console::WriteLine("[2] - Subtracao");
  Console::WriteLine("[3] - Multiplicacao");
  Console::WriteLine("[4] - Divisao");
  Console::WriteLine();
  Console::Write("Escolha uma opcao: ");
  OPCAO = Int32::Parse(Console::ReadLine());
  if (OPCAO == 1)
    R = A + B;
  if (OPCAO == 2)
    R = A - B;
  if (OPCAO == 3)
    R = A * B;
  if (OPCAO == 4)
    if (B == 0)
      R = 0;
    else
      R = A / B;
  Console::WriteLine("O resultado da operacao equivale a: {0, 5}", R);
  return 0;
}
