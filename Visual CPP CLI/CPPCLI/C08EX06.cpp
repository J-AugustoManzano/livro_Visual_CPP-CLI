// C08EX06.CPP

#include "stdafx.h"
using namespace System;

ref class TSALA
{
  public:
    Byte SALA;
};

ref class TALUNO: public TSALA
{
  public:
    String ^NOME;
    Single CMEDIA();
    Single PEGAMEDIA();
    Single PEGANOTA(Byte POS);
    void   POENOTA(Single NT, Byte POS);
    void   DIMNOTA();
  private:
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

Single TALUNO::PEGANOTA(Byte POS)
{
  return NOTA[POS];
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

  TALUNO ALUNO;
  Byte I;

  // Rotina para a entrada dos dados

  Console::WriteLine("Cadastro de alunos");
  Console::WriteLine();

  Console::Write("Informe o nome: ");
  ALUNO.NOME = Console::ReadLine();
  Console::Write("Informe a sala: ");
  ALUNO.SALA = Byte::Parse(Console::ReadLine());
  Console::WriteLine();
  Console::WriteLine("Entre as notas:");
  Console::WriteLine();
  ALUNO.DIMNOTA();
  for (I = 0; I <= 3; I++)
    {
      Console::Write("Nota: {0} = ", I + 1);
      ALUNO.POENOTA(Single::Parse(Console::ReadLine()), I);      
    }
  ALUNO.CMEDIA();

  // Apresentacao dos dados

  Console::WriteLine();
  Console::WriteLine("Relatorio de Notas do Aluno");
  Console::WriteLine();
  Console::Write("Nome .........: ");
  Console::WriteLine(ALUNO.NOME);
  Console::Write("Sala .........: ");
  Console::WriteLine(ALUNO.SALA);
  Console::WriteLine();
  for (int I = 0; I < 4; I++)
    {
      Console::Write("{0}a. nota......: ", I + 1);
      Console::WriteLine(ALUNO.PEGANOTA(I));
    }
  Console::WriteLine();
  Console::Write("Media.........: ");
  Console::WriteLine(ALUNO.PEGAMEDIA());
  Console::WriteLine();

  return 0;
}
