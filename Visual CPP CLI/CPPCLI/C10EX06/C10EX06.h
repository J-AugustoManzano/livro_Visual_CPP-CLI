// C10EX06.h

#pragma once
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

namespace MeuFormulario
{
  public ref class Tela: public Form
  {

    private:

      Label^ ROTULO;
      TextBox^ TEXTO;
      RadioButton^ OPCAO1;
      RadioButton^ OPCAO2;
      Button^ BOTAO;

      void CriaRotulo();
      void CriaTexto();
      void CriaOpcao();
      void CriaBotao();
      void AcionaBotao(Object^ obj, EventArgs^ ea);

    public:
      Tela()
        {

          ROTULO = gcnew Label;
          TEXTO = gcnew TextBox;
          OPCAO1 = gcnew RadioButton;
          OPCAO2 = gcnew RadioButton;
          BOTAO = gcnew Button;

          Text = "Atendimento";
          Width = 400;
          Height = 200;
          StartPosition = FormStartPosition::CenterScreen;
          MaximizeBox = false;
          MinimizeBox = false;
          FormBorderStyle = ::FormBorderStyle::Fixed3D;

          CriaRotulo();
          CriaTexto();
          CriaOpcao();
          CriaBotao();
		  
          return;
        }
  };

  void Tela::CriaRotulo()
  {
    ROTULO->AutoSize = true;
    ROTULO->Text = "Informe seu nome:";
    ROTULO->Location = Point(25,25);
    Controls->Add(ROTULO); 
    return;
  }

  void Tela::CriaTexto()
  {
    TEXTO->Location = Point(131,25);
    TEXTO->Size = ::Size(221,20);
    Controls->Add(TEXTO); 
    return;
  }

  void Tela::CriaBotao()
  {
    BOTAO->Height = 23;
    BOTAO->Width = 75;
    BOTAO->Text = "OK";
    BOTAO->Location = Point(28,110);
    BOTAO->Click += gcnew EventHandler (this, &Tela::AcionaBotao);
    Controls->Add(BOTAO); 
    return;
  }

  void Tela::AcionaBotao(Object^ obj, EventArgs^ ea)
  {
    String^ TIT1 = "Saudação para homem";
    String^ MENS1 = "Olá, Senhor " + TEXTO->Text->ToUpper() + ".";
    String^ TIT2 = "Saudação para mulher";
    String^ MENS2 = "Olá, Senhora " + TEXTO->Text->ToUpper()+ ".";
    MessageBoxButtons BOTS = MessageBoxButtons::OK;
    System::Windows::Forms::DialogResult RESP;
    MessageBoxIcon ICONE = MessageBoxIcon::Information;
    if (OPCAO1->Checked && TEXTO->Text != "")
      RESP = MessageBox::Show(this, MENS1, TIT1, BOTS, ICONE);
    if (OPCAO2->Checked && TEXTO->Text != "")
      RESP = MessageBox::Show(this, MENS2, TIT2, BOTS, ICONE);
    TEXTO->Clear();
    TEXTO->Focus();
    OPCAO1->Checked = false;
    OPCAO2->Checked = false;
    return;
  }

  void Tela::CriaOpcao()
  {
    OPCAO1->Location = Point(25,50);
    OPCAO1->Text = "Masculino";
    OPCAO2->Location = Point(25,73);
    OPCAO2->Text = "Feminino";
    Controls->Add(OPCAO1);
    Controls->Add(OPCAO2);
    return;
  }

}
