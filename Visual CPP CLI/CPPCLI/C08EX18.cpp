// C08EX18.cpp

#include "stdafx.h"
using namespace System;

interface class ITPAI
{
  virtual void Executa1();
};

interface class ITFILHO: public ITPAI
{
  virtual void Executa2();
};

ref class TDADOS: public ITFILHO
{
  public:
    virtual void Executa1()
    {
      Console::WriteLine("Acao na classe interface pai");
      return;
    }

    virtual void Executa2()
    {
      Console::WriteLine("Acao na classe interface filho");
      return;
    }

    virtual void Executa3()
    {
      Console::WriteLine("Acao na classe interface dado");
      return;
    }};

int main()
{

  TDADOS^ DADOX = gcnew TDADOS;

  DADOX->Executa1();
  DADOX->Executa2();
  DADOX->Executa3();

  ITFILHO^ DADOY = DADOX;

  DADOY->Executa1();
  DADOY->Executa2();

  return 0;
}
