// C06EX01.CPP

#include "stdafx.h"
using namespace System;

int main()
{

  // Definicao de variaveis

  Int32 I, J;
  Single SOMA_NT, SOMA_MD, MEDIA_GP; 
  array<Single>^ MEDIA = gcnew array<Single>(8);
  array<Single, 2>^ NOTA = gcnew array<Single, 2>(8, 4);
  array<String^>^ NOME = gcnew array<String^>(8);
  ConsoleKeyInfo TECLA;

  // Rotina para a entrada dos nomes e notas

  Console::WriteLine("Cadastro de alunos");
  Console::WriteLine();
  for (I = 0; I <= 7; I++)
    {
      Console::Write("Informe o {0, 2}o. nome: ", I + 1);
      NOME[I] = Console::ReadLine();
      Console::WriteLine();
      Console::Write("Entre as notas:");
      Console::WriteLine();
      for (J = 0; J <= 3; J++)
        {
          Console::Write("Nota: {0} = ", J + 1);
          NOTA[I, J] = Single::Parse(Console::ReadLine());
        }
      Console::WriteLine();
    }

  // Processamento do calculo das medias

  SOMA_MD = 0;
  for (I = 0; I <= 7; I++)
    {
      SOMA_NT = 0;
      for (J = 0; J <= 3; J++)
        SOMA_NT = SOMA_NT + NOTA[I, J];
      MEDIA[I] = SOMA_NT / 4;
      SOMA_MD = SOMA_MD + MEDIA[I];
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

  Array::Sort(NOME, MEDIA);

  // Apresentacao da tabela nome/notas/media

  Console::Clear();
  Console::SetCursorPosition(33,0); // coluna 33 linha 0
  Console::Write("Relatorio Geral");
  Console::SetCursorPosition(0,2);
  Console::Write("Aluno");
  Console::SetCursorPosition(40,2);
  Console::Write("Media");
  for (I = 0; I <= 7; I++)
    {
      Console::SetCursorPosition(0, I + 5);
      Console::Write(NOME[I]);
      Console::SetCursorPosition(40, I + 5);
      Console::Write(MEDIA[I]);
    }
  Console::WriteLine();
  Console::WriteLine();
  Console::Write("Media Geral = {0, 8}", MEDIA_GP);
  Console::WriteLine();
  Console::WriteLine();
  return 0;
}
