// C08EX16.cpp

#include "stdafx.h"
using namespace System;

interface class ITSALA
{
  property Int32 ^SALA;
  void MOSTRASALA();
};

ref class TALUNO: public ITSALA
{
  private:
    Int32 ^SL;
  public:
    String ^NOME;
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

    virtual void MOSTRASALA()
    {
      Console::Write(SALA);
      return;
    }
};

int main()
{
  TALUNO ALUNO;
  Console::Write("Informe o nome: ");
  ALUNO.NOME = Console::ReadLine();
  Console::Write("Informe a sala: ");
  ALUNO.SALA = Int32::Parse(Console::ReadLine());
  Console::WriteLine();
  Console::Write("Nome .........: ");
  Console::WriteLine(ALUNO.NOME);
  Console::Write("Sala .........: ");
  ALUNO.MOSTRASALA();
  Console::WriteLine();
  return 0;
}
