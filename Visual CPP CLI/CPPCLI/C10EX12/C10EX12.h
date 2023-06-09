// C10EX12.h

#pragma once
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

namespace MeuFormulario
{
  public ref class Tela: public Form
  {

    private:

      Label^ ROTULO1;
      MaskedTextBox^ MASCARA;
      Button^ BOTAO1;
      Button^ BOTAO2;
      Label^ ROTULO2;
      HelpProvider^ AJUDA;

      void CriaRotulo1();
      void CriaMascaraTexto();
      void CriaBotao1();
      void CriaBotao2();
      void CriaRotulo2();

      void AcionaBotao1(Object^ obj, EventArgs^ ea);
      void AcionaBotao2(Object^ obj, EventArgs^ ea);

    public:
      Tela()
        {

          ROTULO1 = gcnew Label;
          MASCARA = gcnew MaskedTextBox;
          BOTAO1 = gcnew Button;
          BOTAO2 = gcnew Button;
          ROTULO2 = gcnew Label;
          AJUDA = gcnew HelpProvider;

          Text = "Validação de CPF";
          Width = 315;
          Height = 200;
          StartPosition = FormStartPosition::CenterScreen;
          MaximizeBox = false;
          MinimizeBox = false;
          FormBorderStyle = ::FormBorderStyle::Fixed3D;

          CriaRotulo1();
          CriaMascaraTexto();
          CriaBotao1();
          CriaBotao2();
          CriaRotulo2();
		  
          return;
        }
  };

  void Tela::CriaRotulo1()
  {
    ROTULO1->AutoSize = true;
    ROTULO1->Text = "Entre o número de um CPF:";
    ROTULO1->Location = Point(25,25);
    Controls->Add(ROTULO1); 
    return;
  }

  void Tela::CriaMascaraTexto()
  {
    MASCARA->TabIndex = 0;
    MASCARA->Location = Point(170,25);
    MASCARA->Mask = "000.000.000-00";
    MASCARA->TextAlign = HorizontalAlignment::Center;
    MASCARA->Size = ::Size(95,20);
    Controls->Add(MASCARA); 
    AJUDA->SetHelpString(MASCARA, "Entre um número de CPF");
    return;
  }

  void Tela::CriaBotao1()
  {
    BOTAO1->Height = 23;
    BOTAO1->Width = 75;
    BOTAO1->Text = "OK";
    BOTAO1->Location = Point(25,60);
    BOTAO1->Click += gcnew EventHandler (this, &Tela::AcionaBotao1);
    Controls->Add(BOTAO1); 
    return;
  }

  void Tela::CriaBotao2()
  {
    BOTAO2->Height = 23;
    BOTAO2->Width = 75;
    BOTAO2->Text = "Limpar";
    BOTAO2->Location = Point(125,60);
    BOTAO2->Click += gcnew EventHandler (this, &Tela::AcionaBotao2);
    Controls->Add(BOTAO2); 
    return;
  }

  void Tela::CriaRotulo2()
  {
    ROTULO2->AutoSize = true;
    ROTULO2->Location = Point(25,105);
    ROTULO2->Size = ::Size(94,13);
    Controls->Add(ROTULO2); 
    return;
  }

  void Tela::AcionaBotao1(Object^ obj, EventArgs^ ea)
  {

    String^ NUMERO;
    Int32 POSICAO, I, SOMA, DV, DV_INFORMADO;
    array<Int32>^ DIGITO = gcnew array<Int32>(11);

    MASCARA->TextMaskFormat = MaskFormat::ExcludePromptAndLiterals;
    NUMERO = MASCARA->Text;

    if (NUMERO != "" && MASCARA->MaskCompleted == true)
    {

      DV_INFORMADO = Int32::Parse(NUMERO->ToString()->Substring(9,2));

      for (Int32 I = 0; I <= 8; I++)
        DIGITO[I] = Int32::Parse(NUMERO->ToString()->Substring(I, 1));

      POSICAO = 10;
      SOMA = 0;

      for (Int32 I = 0; I <= 8; I++)
      {
        SOMA += DIGITO[I] * POSICAO;
        POSICAO -= 1;
      }

      DIGITO[9] = SOMA % 11;

      if (DIGITO[9] < 2)
        DIGITO[9] = 0;
      else
        DIGITO[9] = 11 - DIGITO[9];

      POSICAO = 11;
      SOMA = 0;

      for (Int32 I = 0; I <= 9; I++)
      {
        SOMA += DIGITO[I] * POSICAO;
        POSICAO -= 1;
      }
   
      DIGITO[10] = SOMA % 11;

      if (DIGITO[10] < 2)
        DIGITO[10] = 0;
      else
        DIGITO[10] = 11 - DIGITO[10];

      DV = DIGITO[9] * 10 + DIGITO[10];

      if (DV != DV_INFORMADO)
        ROTULO2->Text = "CPF informado é inválido.";
      else
        ROTULO2->Text = "CPF informado é válido.";
        MASCARA->Focus();
        MASCARA->SelectionStart = 0;

    }
    else
    {
      ROTULO2->Text = "Informe um valor que seja válido.";
      MASCARA->Clear();
      MASCARA->Focus();
    }
    return;
  }

  void Tela::AcionaBotao2(Object^ obj, EventArgs^ ea)
  {
    MASCARA->Clear();
    MASCARA->Focus();
    ROTULO2->Text = "";
    return;
  }

}
