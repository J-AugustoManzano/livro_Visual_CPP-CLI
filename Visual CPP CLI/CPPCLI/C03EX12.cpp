// C03EX12.cpp

#include "stdafx.h"
using namespace System;

int main()
{
  int N, R4, R5;
  Console::Write("Entre um valor numerico natural: ");
  N = Int32::Parse(Console::ReadLine());
  Console::WriteLine();
  R4 = N - 4 * (N / 4); 
  R5 = N - 5 * (N / 5);
  if (R4 == 0 && R5 == 0)
    Console::WriteLine(N);
  else
    Console::WriteLine("Valor nao e divisivel por 4 e 5.");
  return 0;
}
