// C03EX07.cpp

#include "stdafx.h"
using namespace System;

int main()
{
  float A, B, C;
  Console::Write("Entre o valor <A>: ");
  A = Single::Parse(Console::ReadLine());
  Console::Write("Entre o valor <B>: ");
  B = Single::Parse(Console::ReadLine());
  Console::Write("Entre o valor <C>: ");
  C = Single::Parse(Console::ReadLine());
  Console::WriteLine();
  if (A<B+C && B<A+C && C<A+B)
    if (A==B && B==C)
      Console::WriteLine("Triangulo Equilatero");
    else
      if (A==B || A==C || C==B)
        Console::WriteLine("Triangulo Isosceles");
      else
        Console::WriteLine("Triangulo Escaleno");
  else
    Console::WriteLine("Valores fornecidos nao formam um triangulo");
  return 0;
}
