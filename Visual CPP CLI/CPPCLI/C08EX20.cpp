// C08EX20.cpp

#include "stdafx.h"
using namespace System;

class TALPHA
{
  public:
    static Int32 MEMBRO_ESTATICO;
    Int32 soma(Int32 VALOR)
    {
      return MEMBRO_ESTATICO + VALOR;
    }
};

Int32 TALPHA::MEMBRO_ESTATICO = 0;

int main()
{
  TALPHA A, B;
  Int32 R;

  Console::WriteLine(A.MEMBRO_ESTATICO);
  Console::WriteLine(B.MEMBRO_ESTATICO);

  A.MEMBRO_ESTATICO = 5;
  Console::WriteLine(A.MEMBRO_ESTATICO);
  Console::WriteLine(B.MEMBRO_ESTATICO);

  B.MEMBRO_ESTATICO = 15;
  Console::WriteLine(A.MEMBRO_ESTATICO);
  Console::WriteLine(B.MEMBRO_ESTATICO);

  A.MEMBRO_ESTATICO = Int32::Parse(Console::ReadLine());
  Console::WriteLine(A.MEMBRO_ESTATICO);
  Console::WriteLine(B.MEMBRO_ESTATICO);

  R = A.soma(A.MEMBRO_ESTATICO);
  Console::WriteLine(R);

  R = B.soma(B.MEMBRO_ESTATICO);
  Console::WriteLine(R);

  return 0;
}
