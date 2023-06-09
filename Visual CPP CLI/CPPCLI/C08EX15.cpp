// C08EX15.cpp

#include "stdafx.h"
using namespace System;

ref class TSALA
{
  public:
    Int32 SALA;
    Int32 SERIE;
};

ref class TALUNO: public TSALA
{
  public:
    String ^NOME;
    array<Single>^ NOTA;
    Single MEDIA;
    Single CMEDIA();
};

Single TALUNO::CMEDIA()
{
  Int32 I;
  MEDIA = 0;
  for (I = 0; I < 4; I++)
    MEDIA += NOTA[I];
  MEDIA /= 4;
  return MEDIA;
}

int main()
{

  array<TALUNO^>^ ALUNO = gcnew array<TALUNO^>(5);
  Int32 I, J, POS;

  // Rotina para a entrada dos dados

  Console::WriteLine("Cadastro de alunos");
  Console::WriteLine();

  for (I = 0; I <= 4; I++)
    {
      ALUNO[I] = gcnew TALUNO;
      Console::Write("Informe o {0}o. nome: ", I + 1);
      ALUNO[I]->NOME = Console::ReadLine();
      Console::Write("Informe a sala: ");
      ALUNO[I]->SALA = Int32::Parse(Console::ReadLine());
      Console::Write("Informe a serie: ");
      ALUNO[I]->SERIE = Int32::Parse(Console::ReadLine());
      Console::WriteLine();
      Console::WriteLine("Entre as notas:");
      Console::WriteLine();
      ALUNO[I]->NOTA = gcnew array<Single>(4);
      for (J = 0; J <= 3; J++)
        {
          Console::Write("Nota: {0} = ", J + 1);
          ALUNO[I]->NOTA[J] = Single::Parse(Console::ReadLine());
        }
      ALUNO[I]->CMEDIA();
      Console::WriteLine();
    }

  // Apresentacao dos dados

  Console::Clear();
  Console::WriteLine("Relatorio de Notas do Aluno");
  Console::SetCursorPosition( 0, 3 );
  Console::Write("Nome");
  Console::SetCursorPosition(38, 3 );
  Console::Write("Sala");
  Console::SetCursorPosition(43, 3 );
  Console::Write("Serie");
  Console::SetCursorPosition(49, 3 );
  Console::Write("Nota1");
  Console::SetCursorPosition(55, 3 );
  Console::Write("Nota2");
  Console::SetCursorPosition(61, 3 );
  Console::Write("Nota3");
  Console::SetCursorPosition(67, 3 );
  Console::Write("Nota4");
  Console::SetCursorPosition(73, 3 );
  Console::Write("Media");
  POS = 49;
  for (I = 0; I <= 4; I++)
    {
      Console::SetCursorPosition( 0, 5 + I);
      Console::Write(ALUNO[I]->NOME);
      Console::SetCursorPosition(38, 5 + I);
      Console::Write(ALUNO[I]->SALA);
      Console::SetCursorPosition(43, 5 + I);
      Console::Write(ALUNO[I]->SERIE);
      for (int J = 0; J < 4; J++)
        {
          Console::SetCursorPosition(POS, 5 + I);
          Console::WriteLine(ALUNO[I]->NOTA[J]);
          POS += 6;
        }
      POS = 49;
      Console::SetCursorPosition(73, 5 + I);
      Console::WriteLine(ALUNO[I]->MEDIA);
    }
  Console::WriteLine();
  return 0;
}
