// C09EX07.cpp

#include "stdafx.h"
using namespace System;
using namespace System::IO;

int main()
{
  String^ ARQ = "C:\\Dados\\DADOS.PPP";
  try 
    {
      FileStream^ ACESSO = gcnew FileStream(ARQ, FileMode::Open);
      BinaryReader^ ARQUIVO = gcnew BinaryReader(ACESSO);
      Console::WriteLine("*** O arquivo foi aberto ***");
      ARQUIVO->Close();
    }
  catch (Exception^)
    {
      Console::WriteLine("O arquivo nao pode ser aberto");
      Console::WriteLine("***  arquivo inexistente  ***");
      return -1;
    }
  return 0;
}
