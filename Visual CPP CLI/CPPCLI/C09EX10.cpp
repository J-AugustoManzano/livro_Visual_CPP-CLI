// C09EX10.cpp

#include "stdafx.h"
using namespace System;
using namespace System::IO;

int main()
{
  Int32 VALOR;
  String^ RESP;

  String^ ARQ = "C:\\Dados\\MATINT.DBC";
  FileStream^ ACESSO = gcnew FileStream(ARQ, FileMode::Append);
  BinaryWriter^ ARQUIVO = gcnew BinaryWriter(ACESSO);

  Console::WriteLine("Cadastro sequencial de valores");
  Console::WriteLine();

  do
    {
      Console::Write("Entre um valor: ");
      VALOR = Int32::Parse(Console::ReadLine());
      ARQUIVO->Write(VALOR);
      Console::WriteLine();
      Console::WriteLine("Deseja continuar? ");
      Console::Write("[S] para Sim [qualquer letra] para Não: ");
      RESP = Console::ReadLine();
      Console::WriteLine();
    }
  while(RESP->ToUpper() == "S");

  ARQUIVO->Close();

  return 0;
}
