// C09EX09.cpp

#include "stdafx.h"
using namespace System;
using namespace System::IO;

int main(void)
{
  String^ ARQ = "C:\\Dados\\MATINT2.DBC";
  try 
   {
      FileStream^ ACESSO = gcnew FileStream(ARQ, FileMode::CreateNew);
      BinaryWriter^ ARQUIVO = gcnew BinaryWriter(ACESSO);
      Console::WriteLine("*** O arquivo foi criado ***");
      ARQUIVO->Close();
    }
  catch (Exception^)
    {
      FileStream^ ACESSO = gcnew FileStream(ARQ, FileMode::Open);
      BinaryReader^ ARQUIVO = gcnew BinaryReader(ACESSO);
      Console::WriteLine("O arquivo nao pode ser criado");
      Console::WriteLine("***   arquivo existente   ***");
      ARQUIVO->Close();
    }
  return 0;
}
