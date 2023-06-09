// C09EX04.cpp

#include "stdafx.h"
using namespace System;
using namespace System::IO;

int main()
{
  array<Single>^ A = gcnew array<Single>(10);
  String^ ARQ = "C:\\Dados\\MATFLO.DBC";
  FileStream^ ACESSO = gcnew FileStream(ARQ, FileMode::Create);
  BinaryWriter^ ARQBIN = gcnew BinaryWriter(ACESSO);
  for (Byte I = 0; I <= 9; I++)
    {
      Console::Write("Digite o elemento {0, 2} - ", I + 1);
      A[I] = Single::Parse(Console::ReadLine());
      ARQBIN->Write(A[I]);
    }
  ARQBIN->Close();
  return 0;
}
