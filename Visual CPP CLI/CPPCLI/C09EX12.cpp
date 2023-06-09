// C09EX12.cpp

#include "stdafx.h"
using namespace System;
using namespace System::IO;

int main()
{

  Int32 VALOR;
  UInt32 POS;
  UInt64 TAMANHO, NR_REGS;
  String^ RESP;

  String^ ARQ = "C:\\Dados\\MATINT.DBC";
  FileStream^ ACESSO = gcnew FileStream(ARQ, FileMode::Open);
  BinaryWriter^ ARQUIVO = gcnew BinaryWriter(ACESSO);

  Console::WriteLine("Pesquisa direta e escrita de valores");
  Console::WriteLine();

  ACESSO->Seek(0, SeekOrigin::End);
  TAMANHO = ACESSO->Length;
  NR_REGS = TAMANHO / 4;

  do
    {
      Console::Write("Entre a posicao a ser alterada: ");
      POS = UInt32::Parse(Console::ReadLine());
      Console::WriteLine();
      if (POS >= 1 && POS <= NR_REGS)
        {	  
          ACESSO->Seek((POS - 1) * sizeof(POS), SeekOrigin::Begin);
          Console::Write("Entre o novo valor: ");
          VALOR = Int32::Parse(Console::ReadLine());
          ARQUIVO->Write(VALOR);
          Console::WriteLine("Valor {0} na posicao {1}", VALOR, POS);
        }
      else  
        Console::WriteLine("Posicao informada - invalida");
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
