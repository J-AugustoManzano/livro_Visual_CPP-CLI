// C09EX02.cpp

#include "stdafx.h"
using namespace System;
using namespace System::IO;

int main()
{
  String^ MENSAGEM;
  String^ ARQ = "C:\\Dados\\ARQTXT.XXX";
  StreamWriter^ ARQTXT = File::AppendText(ARQ);
  Console::Write("Informe a mensagem: ");
  MENSAGEM = Console::ReadLine();
  ARQTXT->WriteLine(MENSAGEM);
  ARQTXT->Close();
  return 0;
}
