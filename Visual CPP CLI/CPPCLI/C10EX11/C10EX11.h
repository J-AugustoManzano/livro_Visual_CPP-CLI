// C10EX11.h

#pragma once
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

namespace MeuFormulario
{
  public ref class Tela: public Form
  {

    private:

      GroupBox^ GRUPO;
      CheckBox^ OPCAO1;
      CheckBox^ OPCAO2;
      CheckBox^ OPCAO3;
      Button^ BOTAO;

      void CriaGrupo();
      void CriaBotao();
      void AcionaBotao(Object^ obj, EventArgs^ ea);

    public:
      Tela()
        {

          GRUPO = gcnew GroupBox();
          OPCAO1 = gcnew CheckBox;
          OPCAO2 = gcnew CheckBox;
          OPCAO3 = gcnew CheckBox;
          BOTAO = gcnew Button;

          Text = "Selecione";
          Width = 160;
          Height = 200;
          StartPosition = FormStartPosition::CenterScreen;
          MaximizeBox = false;
          MinimizeBox = false;
          FormBorderStyle = ::FormBorderStyle::Fixed3D;

          CriaGrupo();
          CriaBotao();
		  
          return;
        }
  };

  void Tela::CriaGrupo()
  {
    GRUPO->Location = Point(5,8);
    GRUPO->Width = 130;
    GRUPO->Text = "Grupo de Opções";
    OPCAO1->Location = Point(25,22);
    OPCAO1->Width = 70;
    OPCAO1->Text = "Opção 1";
    OPCAO2->Location = Point(25,45);
    OPCAO2->Width = 70;
    OPCAO2->Text = "Opção 2";
    OPCAO3->Location = Point(25,68);
    OPCAO3->Width = 70;
    OPCAO3->Text = "Opção 3";
    Controls->Add(GRUPO);
    GRUPO->Controls->Add(OPCAO1);
    GRUPO->Controls->Add(OPCAO2);
    GRUPO->Controls->Add(OPCAO3);
    return;
  }

  void Tela::CriaBotao()
  {
    BOTAO->Height = 23;
    BOTAO->Width = 75;
    BOTAO->Text = "OK";
    BOTAO->Location = Point(28,120);
    BOTAO->Click += gcnew EventHandler (this, &Tela::AcionaBotao);
    Controls->Add(BOTAO); 
    return;
  }

  void Tela::AcionaBotao(Object^ obj, EventArgs^ ea)
  {
    String^ TIT = "Opçao selecionada";
    String^ MENS = "";
    MessageBoxButtons BOTS = MessageBoxButtons::OK;
    System::Windows::Forms::DialogResult RESP;
    MessageBoxIcon ICONE = MessageBoxIcon::Information;
    if (OPCAO1->Checked)
      MENS += "Selecionou: Opção 1\n";
    if (OPCAO2->Checked)
      MENS += "Selecionou: Opção 2\n";
    if (OPCAO3->Checked)
      MENS += "Selecionou: Opção 3\n";
    RESP = MessageBox::Show(this, MENS, TIT, BOTS, ICONE);
    OPCAO1->Checked = false;
    OPCAO2->Checked = false;
    OPCAO3->Checked = false;
    return;
  }

}
