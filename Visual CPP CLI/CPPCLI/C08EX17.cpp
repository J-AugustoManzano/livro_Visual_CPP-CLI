// C08EX17.cpp

#include "stdafx.h"
using namespace System;

interface class ITSALA
{
  property Int32 ^SALA;
};

interface class ITSERIE
{
  property Int32 ^SERIE;
};

interface class ITLOCAL: public ITSALA, public ITSERIE {};

ref class TALUNO: public ITLOCAL
{
  public:
    String ^NOME;
    Single CMEDIA();
    Single PEGAMEDIA();
    void   POENOTA(Single NT, Byte POS);
    void   DIMNOTA();
    virtual property Int32 ^SALA
    {
      void set(Int32 ^S)
      {
        SL = S;
      }
      Int32 ^get()
      {
        return SL;
      }
    }
    virtual property Int32 ^SERIE
    {
      void set(Int32 ^S)
      {
        SE = S;
      }
      Int32 ^get()
      {
        return SE;
      }
    }
  private:
    Int32 ^SL;
    Int32 ^SE;
    array<Single>^ NOTA;
    Single MEDIA;
};

Single TALUNO::CMEDIA()
{
  Byte I;
  MEDIA = 0;
  for (I = 0; I < 4; I++)
    MEDIA += NOTA[I];
  MEDIA /= 4;
  return MEDIA;
}

void TALUNO::POENOTA(Single NT, Byte POS)
{
   NOTA[POS] = NT;
   return;
}

Single TALUNO::PEGAMEDIA()
{
  return MEDIA;
}

void TALUNO::DIMNOTA()
{
  NOTA = gcnew array<Single>(4);
  return;
}

int main()
{
  TALUNO ^ALUNO = gcnew TALUNO;
  Int32 I;
  Single NT;

  // Rotina para a entrada dos dados

  Console::WriteLine("Cadastro de alunos");
  Console::WriteLine();

  Console::Write("Informe o nome ..: ");
  ALUNO->NOME = Console::ReadLine();
  Console::Write("Informe a sala ..: ");
  ALUNO->SALA = Int32::Parse(Console::ReadLine());
  Console::Write("Informe a serie .: ");
  ALUNO->SERIE = Int32::Parse(Console::ReadLine());

  Console::WriteLine();
  Console::WriteLine("Entre as notas:");
  Console::WriteLine();
  ALUNO->DIMNOTA();
  for (I = 0; I <= 3; I++)
    {
      Console::Write("Nota: {0} = ", I + 1);
      NT = Single::Parse(Console::ReadLine());
      ALUNO->POENOTA(NT, I);
    }
  ALUNO->CMEDIA();

  // Apresentacao dos dados

  Console::WriteLine();
  Console::WriteLine("Media de Aluno");
  Console::WriteLine();
  Console::Write("Nome .........: ");
  Console::WriteLine(ALUNO->NOME);
  Console::Write("Sala .........: ");
  Console::WriteLine(ALUNO->SALA);
  Console::Write("Serie ........: ");
  Console::WriteLine(ALUNO->SERIE);
  Console::WriteLine();
  Console::Write("Media.........: ");
  Console::WriteLine(ALUNO->PEGAMEDIA());
  Console::WriteLine();
  return 0;
}
