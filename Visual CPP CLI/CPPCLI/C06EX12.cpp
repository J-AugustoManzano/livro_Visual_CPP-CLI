// C06EX12.cpp

#include "stdafx.h"
using namespace System;

#define menor_valor(V1, V2) ((V1 < V2) ? (V1) : (V2))

int main()
{

  Int32 A, B, RESP;

  Console::Write("Entre o 1o. valor: "); 
  A = Int32::Parse(Console::ReadLine());
  
  Console::Write("Entre o 2o. valor: "); 
  B = Int32::Parse(Console::ReadLine());

  RESP = menor_valor(A, B);

  Console::WriteLine("Menor valor: {0}", RESP);
  Console::WriteLine();

  return 0;
}
