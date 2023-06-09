// C06EX04.CPP

#include "stdafx.h"
using namespace System;

value struct CAD_ALUNO: public IComparable
  {
    String^ NOME;
    array<Single>^ NOTA;
    Single MEDIA;

    virtual int CompareTo(Object^ CAMPO)
      {
        CAD_ALUNO^ PROX = dynamic_cast<CAD_ALUNO^>(CAMPO);
        if (PROX)
          {
            String^ NOME1 = NOME;
            String^ NOME2 = PROX->NOME;
            if (NOME1->CompareTo(NOME2) < 0)
              return -1;
            else 
              if (NOME1->CompareTo(NOME2) > 0)
                return 1;
            return 0;
          }
      }
  };

int main()
{

  // Definicao de variaveis e configuracao do ambiente

  array<CAD_ALUNO>^ ALUNO;
  Int32 I, J, N;
  Single SOMA_NT, SOMA_MD, MEDIA_GP; 
  ConsoleKeyInfo TECLA;

  // Rotina para a entrada dos nomes e notas

  Console::Clear();

  Console::Title = "Relatorio de Alunos e Medias";
  Console::BackgroundColor = ConsoleColor::Black;
  Console::ForegroundColor = ConsoleColor::Green;


  Console::WriteLine("Cadastro de alunos");
  Console::WriteLine();
  Console::Write("Quantos alunos: ");

  N = Int32::Parse(Console::ReadLine());
  ALUNO = gcnew array<CAD_ALUNO>(N);

  Console::WriteLine();
  for (I = 0; I <= N - 1; I++)
    {
      Console::Write("Informe o {0, 2}o. nome: ", I + 1);
      ALUNO[I].NOTA = gcnew array<Single>(4);  
      ALUNO[I].NOME = Console::ReadLine();
      Console::WriteLine();
      Console::Write("Entre as notas:");
      Console::WriteLine();
      for (J = 0; J <= 3; J++)
        {
          Console::Write("Nota: {0} = ", J + 1);
          ALUNO[I].NOTA[J] = Single::Parse(Console::ReadLine());
        }
      Console::WriteLine();
    }

  // Processamento do calculo das medias

  SOMA_MD = 0;
  for (I = 0; I <= N - 1; I++)
    {
      SOMA_NT = 0;
      for (J = 0; J <= 3; J++)
        SOMA_NT = SOMA_NT + ALUNO[I].NOTA[J];
      ALUNO[I].MEDIA = SOMA_NT / 4;
      SOMA_MD = SOMA_MD + ALUNO[I].MEDIA;
    }
  MEDIA_GP = SOMA_MD / 8;
  Console::WriteLine();
  Console::WriteLine("Tecle <Enter> para próxima tela ...");
  do
    {
      TECLA = Console::ReadKey(true);
    }
  while (TECLA.Key != ConsoleKey::Enter);
	
  // Classificacao dos dados

  Array::Sort(ALUNO);

  // Apresentacao da tabela nome/notas/media

  Console::Clear();
  Console::BackgroundColor = ConsoleColor::Black;
  Console::ForegroundColor = ConsoleColor::Yellow;
  Console::SetCursorPosition(33,0); // coluna 33 linha 0
  Console::Write("Relatorio Geral");
  Console::SetCursorPosition(0,2);
  Console::Write("Aluno");
  Console::SetCursorPosition(40,2);
  Console::Write("Media");
  for (I = 0; I <= N - 1; I++)
    {
      Console::SetCursorPosition(0, I + 5);
      Console::Write(ALUNO[I].NOME);
      Console::SetCursorPosition(40, I + 5);
      Console::Write(ALUNO[I].MEDIA);
    }
  Console::WriteLine();
  Console::WriteLine();
  Console::Write("Media Geral = {0, 8}", MEDIA_GP);
  Console::WriteLine();
  Console::WriteLine();
  return 0;
}
