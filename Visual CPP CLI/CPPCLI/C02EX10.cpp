// C02EX10.cpp

/**
  O programa seguinte demonstra o uso de linhas de comentarios usadas
  em um codigo de programa escrito na linguagem de programacao do
  ambiente intergrado de desenvolvimento Visual C++.
  O programa apresenta a quantidade de bits de cada tipo de dado
  suportado em C++/CLI.
*/

/*
  Programa .......: C02EX10.cpp
  Autor(es) ......: Augusto Manzano
  Data ...........: 11/10/2012
  Versao .........: 1.0
  Revisao.........: 11/10/2012
*/

#include "stdafx.h"
using namespace System;

int main()
{

  UInt16  UI16; // definicao das variaveis
  Int16   IN16;
  UInt32  UI32;
  Int32   IN32;
  SByte   SB08;
  Byte    BY08;
  Int64   IN64;
  UInt64  UI64;
  Char    CH16;
  Single  SI32;
  Double  DO64;
  Boolean BO08;

  Console::WriteLine("Tipos de dados e seus tamanhos em bits.");
  Console::WriteLine();
  Console::WriteLine("Unsigned integer 16 = {0, 2}", sizeof(UI16)*8);
  Console::WriteLine("Integer 16          = {0, 2}", sizeof(IN16)*8);
  Console::WriteLine("Unsigned integer 32 = {0, 2}", sizeof(UI32)*8);
  Console::WriteLine("Integer 32          = {0, 2}", sizeof(IN32)*8);
  Console::WriteLine("Signed Byte 08      = {0, 2}", sizeof(SB08)*8);
  Console::WriteLine("Byte 08             = {0, 2}", sizeof(BY08)*8);
  Console::WriteLine("Unsigned integer 64 = {0, 2}", sizeof(UI64)*8);
  Console::WriteLine("Integer 64          = {0, 2}", sizeof(IN64)*8);
  Console::WriteLine("Char 16             = {0, 2}", sizeof(CH16)*8);
  Console::WriteLine("Single 32           = {0, 2}", sizeof(SI32)*8);
  Console::WriteLine("Double 64           = {0, 2}", sizeof(DO64)*8);
  Console::WriteLine("Boolean 08          = {0, 2}", sizeof(BO08)*8);
  Console::WriteLine();

  return 0;

}
