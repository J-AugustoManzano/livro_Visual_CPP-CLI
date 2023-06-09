// C08EX22.cpp

#include "stdafx.h"
using namespace System;

ref class TALPHA
{
  public:
    Int32 X;
};

int main()
{
  TALPHA T1, T2;

  T1.X = 3;
  T2.X = 5;

  if (T1.X == T2.X) // se usado T1 == T2 ter-se-a erro
    Console::WriteLine("Valores iguais");
  else
    Console::WriteLine("Valores diferentes");
  return 0;
}
