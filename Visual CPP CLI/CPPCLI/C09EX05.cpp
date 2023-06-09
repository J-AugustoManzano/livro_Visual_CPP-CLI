// C09EX05.cpp

#include "stdafx.h"
using namespace System;
using namespace System::IO;

int main()
{
  array<Single>^ A = gcnew array<Single>(10);
  String^ ARQ = "C:\\Dados\\MATFLO.DBC";
  FileStream^ ACESSO = gcnew FileStream(ARQ, FileMode::Open);
  BinaryReader^ ARQBIN = gcnew BinaryReader(ACESSO);
  for (Byte I = 0; I <= 9; I++)
    {
      A[I] = ARQBIN->ReadSingle();
      Console::WriteLine("Elemento {0, 2} – {1, 2:F2}", I + 1, A[I]);
    }
  ARQBIN->Close();
  return 0;
}
