// C06EX10.cpp

#include "stdafx.h"
using namespace System;

typedef Single Real;
typedef Int32  Integer;

int main()
{

  Integer A;
  Real B;

  Console::Write("Entre um valor inteiro: ");
  A = Integer::Parse(Console::ReadLine());
  Console::WriteLine("Foi informado o valor: {0}", A);

  Console::Write("Entre um valor real: ");
  B = Real::Parse(Console::ReadLine());
  Console::WriteLine("Foi informado o valor: {0}", B);

  Console::WriteLine();
  return 0;
}
