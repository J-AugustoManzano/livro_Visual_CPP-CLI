// C09EX06.cpp

#include "stdafx.h"
using namespace System;
using namespace System::IO;

int main()
{

  array<Int32>^ A = gcnew array<Int32>(10);
  array<Int32>^ B = gcnew array<Int32>(10);

  String^ ARQ = "C:\\Dados\\VALORES.DCP";

  FileStream^ ACESSO1 = gcnew FileStream(ARQ, FileMode::Create);
  BinaryWriter^ ARQBIN1 = gcnew BinaryWriter(ACESSO1);
  for (Byte I = 0; I <= 9; I++)
    {
      Console::Write("Entre o elemento A[{0, 2}] - ", I + 1);
      A[I] = Int32::Parse(Console::ReadLine());
      ARQBIN1->Write(A[I]);
    }
  ARQBIN1->Close();

  FileStream^ ACESSO2 = gcnew FileStream(ARQ, FileMode::Open);
  BinaryReader^ ARQBIN2 = gcnew BinaryReader(ACESSO2);
  for (Byte I = 0; I <= 9; I++)
    {
      B[I] = ARQBIN2->ReadInt32();
      Console::WriteLine("Elemento B[{0, 2}] – {1, 2}", I + 1, A[I]);
    }
  ARQBIN2->Close();
		
  return 0;
}
