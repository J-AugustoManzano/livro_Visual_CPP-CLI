// C08EX11.cpp

#include "stdafx.h"
using namespace System;

ref class TPAI
{
  public:
    virtual void Executa()
    {
      Console::WriteLine("Acao na classe pai");
      return;
    }
};

ref class TFILHO: public TPAI
{
  public:
    virtual void Executa() override
    {
      Console::WriteLine("Acao na classe filho");
      return;
    }
};

int main()
{

  TPAI^ PAI = gcnew TPAI;
  TFILHO^ FILHO = gcnew TFILHO;

  PAI->Executa();
  FILHO->Executa();

  PAI = FILHO;
  PAI->Executa();

  return 0;
}
