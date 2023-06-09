// C08EX21.cpp

#include "stdafx.h"
using namespace System;

class TALPHA
{
  public:
    static Int32 MEMBRO_ESTATICO;
    static Int32 soma(Int32 VALOR)
    {
      return MEMBRO_ESTATICO + VALOR;
    }
};

Int32 TALPHA::MEMBRO_ESTATICO = 0;

int main()
{
  Int32 R;

  Console::WriteLine(TALPHA::MEMBRO_ESTATICO);

  TALPHA::MEMBRO_ESTATICO = Int32::Parse(Console::ReadLine());
  R = TALPHA::soma(TALPHA::MEMBRO_ESTATICO);
  Console::WriteLine(R);

  return 0;
}
