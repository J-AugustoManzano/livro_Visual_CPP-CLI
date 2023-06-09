// C10EX08.h

#pragma once
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

namespace MeuFormulario
{
  public ref class Tela: public Form
  {

    private:

      ComboBox^ CAIXA;
      Button^ BOTAO;

      void CriaCaixa();
      void CriaBotao();
      void AcionaBotao(Object^ obj, EventArgs^ ea);
      void AcionaTecla(Object^ obj, KeyPressEventArgs^ kpea);

    public:
      Tela()
        {

          CAIXA = gcnew ComboBox;
          BOTAO = gcnew Button;

          Text = "Selecione";
          Width = 170;
          Height = 300;
          StartPosition = FormStartPosition::CenterScreen;
          MaximizeBox = false;
          MinimizeBox = false;
          FormBorderStyle = ::FormBorderStyle::Fixed3D;

          CriaCaixa();
          CriaBotao();
		  
          return;
        }
  };

  void Tela::CriaCaixa()
  {
    Int32 I = CAIXA->FindString(CAIXA->Text);
    CAIXA->DropDownStyle = ComboBoxStyle::Simple;
    CAIXA->Location = Point(25,28);
    CAIXA->Size = ::Size(100,150);
    CAIXA->Items->AddRange
      (
        gcnew array<System::Object^>
          {
            "Opção 1",
            "Opção 2",
            "Opção 3",
            "Opção 4",
          }   
      )
    ;
    CAIXA->SelectedIndex = I;
    CAIXA->KeyPress += gcnew KeyPressEventHandler 
      (
        this, &Tela::AcionaTecla
      )
    ;
    Controls->Add(CAIXA);
    return;
  }

  void Tela::AcionaTecla(Object^ obj, KeyPressEventArgs^ kpea)
  {
    if (kpea->KeyChar == '\r')
      CAIXA->Items->Add(CAIXA->Text);
    return;
  }

  void Tela::CriaBotao()
  {
    BOTAO->Height = 23;
    BOTAO->Width = 100;
    BOTAO->Text = "Sair";
    BOTAO->Location = Point(25,200);
    BOTAO->Click += gcnew EventHandler (this, &Tela::AcionaBotao);
    Controls->Add(BOTAO); 
    return;
  }

  void Tela::AcionaBotao(Object^ obj, EventArgs^ ea)
  {
    Application::Exit();
    return;
  }

}
