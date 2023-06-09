// C09EX01.cpp

#include "stdafx.h"
using namespace System;
using namespace System::IO;

int main()
{
  String^ ARQ = "C:\\Dados\\ARQTXT.XXX";
  StreamWriter^ ARQTXT = File::CreateText(ARQ);
  ARQTXT->Close();
  return 0;
}
