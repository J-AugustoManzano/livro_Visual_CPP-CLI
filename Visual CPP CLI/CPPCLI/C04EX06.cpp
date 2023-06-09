// C04EX06.CPP

#include "stdafx.h"
using namespace System;

int main(void)
{
  int N, I, R;
  String^ RESP;
  do
    {
      Console::Write("Entre o valor da tabuada: ");
      N = Int32::Parse(Console::ReadLine());
      Console::WriteLine();
      I = 1;
      do
        {
          R = N * I;
          Console::WriteLine("{0, 2} X {1, 2} = {2, 3}", N, I, R);
          I++;
        }
      while (I <= 10);
      Console::WriteLine();
      Console::WriteLine("Deseja continuar?");
      Console::WriteLine("[S] = SIM / qualquer caractere = NAO: ");
      RESP = Console::ReadLine();
    }
  while (RESP == "S" || RESP == "s");
  return 0;
}
