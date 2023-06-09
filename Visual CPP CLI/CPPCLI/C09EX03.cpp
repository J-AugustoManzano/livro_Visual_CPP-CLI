// C09EX03.cpp

#include "stdafx.h"
using namespace System;
using namespace System::IO;

int main()
{
  String^ MENSAGEM;
  String^ ARQ = "C:\\Dados\\ARQTXT.XXX";
  StreamReader^ ARQTXT = File::OpenText(ARQ);
  while ((MENSAGEM = ARQTXT->ReadLine()) != nullptr)
    {
      Console::WriteLine(MENSAGEM);
    }
  ARQTXT->Close();
  return 0;
}
