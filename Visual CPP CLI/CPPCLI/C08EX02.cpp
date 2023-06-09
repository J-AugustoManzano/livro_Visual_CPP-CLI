// C08EX02.cpp

#include "stdafx.h"
using namespace System;

value class TALUNO
{
  public:
    String ^NOME;
    array<Single>^ NOTA;
    Single MEDIA;
    Single CMEDIA()
    {
      Int32 I;
      MEDIA = 0;
      for (I = 0; I < 4; I++)
        MEDIA += NOTA[I];
      MEDIA /= 4;
      return MEDIA;
  }
};

int main()
{

  TALUNO ^ALUNO = gcnew TALUNO;
  Int32 I;

  // Rotina para a entrada dos dados

  Console::WriteLine("Cadastro de alunos");
  Console::WriteLine();

  Console::Write("Informe o nome: ");
  ALUNO->NOME = Console::ReadLine();
  Console::WriteLine();
  Console::WriteLine("Entre as notas:");
  Console::WriteLine();
  ALUNO->NOTA = gcnew array<Single>(4);  
  for (I = 0; I <= 3; I++)
    {
      Console::Write("Nota: {0} = ", I + 1);
      ALUNO->NOTA[I] = Single::Parse(Console::ReadLine());
    }
  ALUNO->CMEDIA();

  // Apresentacao dos dados

  Console::WriteLine();
  Console::WriteLine("Relatorio de Notas do Aluno");
  Console::WriteLine();
  Console::Write("Nome .........: ");
  Console::WriteLine(ALUNO->NOME);
  Console::WriteLine();
  for (int I = 0; I < 4; I++)
    {
      Console::Write("{0}a. nota......: ", I + 1);
      Console::WriteLine(ALUNO->NOTA[I]);
    }
  Console::WriteLine();
  Console::Write("Media.........: ");
  Console::WriteLine(ALUNO->MEDIA);
  Console::WriteLine();

  return 0;
}
