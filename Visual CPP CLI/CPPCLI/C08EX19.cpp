// C08EX19.cpp

#include "stdafx.h"
using namespace System;

interface class ITPAI
{
  virtual void Executa();
};

interface class ITFILHO: public ITPAI
{
  virtual void Executa();
};

ref class TDADOS: public ITFILHO
{
  public:
    virtual void Executa()
    {
      Console::WriteLine("Estudo de C++/CLI");
      return;
    }
};

int main()
{

  TDADOS^ DADOX = gcnew TDADOS;

  DADOX->Executa();

  ITPAI^ DADOY = DADOX;

  DADOY->Executa();

  ITFILHO^ DADOZ = DADOX;

  DADOZ->Executa();

  return 0;
}
