// C04EX03.CPP

#include "stdafx.h"
using namespace System;

int main(void)
{
  int N, I, R;
  String^ RESP = "S";
  while (RESP == "S" || RESP == "s")
    {
      Console::Write("Entre o valor da tabuada: ");
      N = Int32::Parse(Console::ReadLine());
      Console::WriteLine();
      I = 1;
      while (I <= 10)
        {
          R = N * I;
          Console::WriteLine("{0, 2} X {1, 2} = {2, 3}", N, I, R);
          I++;
        }
      Console::WriteLine();
      Console::WriteLine("Deseja continuar?");
      Console::WriteLine("[S] = SIM / qualquer caractere = NAO: ");
      RESP = Console::ReadLine();
    }
  return 0;
}
