// C08EX12.cpp

#include "stdafx.h"
using namespace System;

ref class TPESSOA
{

  public:
    TPESSOA(String^ NM)
      {
        TPESSOA::NOME = NM;
      };

    void PEGNOME()
      {
        Console::WriteLine(NOME);
        return;
      }

    virtual void PROFISSAO() 
      {
        Console::WriteLine("Atividade profissional desconhecida");
        Console::WriteLine();
      }

  private:
    String^ NOME;
};

ref class TMEDICO: public TPESSOA
{
  public:
    TMEDICO(String^ NOME): TPESSOA(NOME){};
    ~TMEDICO(){};
    virtual void PROFISSAO() override
    {
      Console::WriteLine("Voce possui formacao em medicina");
      Console::WriteLine();
    }
};

ref class TADVOGADO: public TPESSOA
{
  public:
    TADVOGADO(String^ NOME): TPESSOA(NOME){};
    ~TADVOGADO(){};
    virtual void PROFISSAO() override
    {
      Console::WriteLine("Voce possui formacao em advocacia");
      Console::WriteLine();
    }
};

int main()
{

  TPESSOA^  PROFISSIONAL = gcnew TPESSOA("");

  TADVOGADO^ PROFIS1 = gcnew TADVOGADO("Marisa Monteiro");
  TMEDICO^   PROFIS2 = gcnew TMEDICO("Carlos de Andrade");
  TPESSOA^   PROFIS3 = gcnew TPESSOA("Joana Silva");

  PROFISSIONAL = PROFIS1;
  PROFISSIONAL->PEGNOME();
  PROFISSIONAL->PROFISSAO();

  PROFISSIONAL = PROFIS2;
  PROFISSIONAL->PEGNOME();
  PROFISSIONAL->PROFISSAO();

  PROFISSIONAL = PROFIS3;
  PROFISSIONAL->PEGNOME();
  PROFISSIONAL->PROFISSAO();

  return 0;
}
