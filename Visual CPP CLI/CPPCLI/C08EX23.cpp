// C08EX23.CPP

#include "stdafx.h"
using namespace System;

ref class TALPHA
{
  public:
    Int32 X;
    Boolean operator == (const TALPHA% T)
    {
      return X == T.X;
    }
};

int main(void)
{
  TALPHA T1, T2;

  T1.X = 3;
  T2.X = 5;

  if (T1 == T2)
    Console::WriteLine("Valores iguais");
  else
    Console::WriteLine("Valores diferentes");
  return 0;
}
