// C10EX16.h

#pragma once
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

namespace MeuFormulario
{
  public ref class Tela: public Form
  {

    private:

      System::Windows::Forms::ContextMenuStrip^ CONTEXTO;

      ToolStripMenuItem^ OPCAO1;
      ToolStripMenuItem^ OPCAO2;
      ToolStripMenuItem^ OPCAO3;
      ToolStripMenuItem^ OPCAO4;

      void CriaMenu();

      void AcionaOP1(Object^ obj, EventArgs^ ea);
      void AcionaOP2(Object^ obj, EventArgs^ ea);
      void AcionaOP3(Object^ obj, EventArgs^ ea);
      void AcionaOP4(Object^ obj, EventArgs^ ea);

    public:
      Tela()
        {

          CONTEXTO = gcnew System::Windows::Forms::ContextMenuStrip;

          OPCAO1 = gcnew ToolStripMenuItem("Opção 1");
          OPCAO2 = gcnew ToolStripMenuItem("Opção 2");
          OPCAO3 = gcnew ToolStripMenuItem("Opção 3");
          OPCAO4 = gcnew ToolStripMenuItem("Reset");

          Text = "Seleção de Opções";
          Width = 315;
          Height = 200;
          StartPosition = FormStartPosition::CenterScreen;
          FormBorderStyle = ::FormBorderStyle::Fixed3D;

          ContextMenuStrip = CONTEXTO;
   
          CriaMenu();
		  
          return;
        }
  };

  void Tela::CriaMenu()
  {

    CONTEXTO->Items->Add(OPCAO1);
    CONTEXTO->Items->Add(OPCAO2);
    CONTEXTO->Items->Add(OPCAO3);
    CONTEXTO->Items->Add(OPCAO4);

    OPCAO1->Click += gcnew EventHandler(this, &Tela::AcionaOP1);
    OPCAO2->Click += gcnew EventHandler(this, &Tela::AcionaOP2);
    OPCAO3->Click += gcnew EventHandler(this, &Tela::AcionaOP3);
    OPCAO4->Click += gcnew EventHandler(this, &Tela::AcionaOP4);

    OPCAO1->Enabled = true;
    OPCAO2->Enabled = true;
    OPCAO3->Enabled = true;
    OPCAO4->Enabled = false;

    return;

  }

  void Tela::AcionaOP1(Object^ obj, EventArgs^ ea)
  {
    OPCAO1->Enabled = false;
    OPCAO2->Enabled = true;
    OPCAO3->Enabled = true;
    OPCAO4->Enabled = true;
    String^ TIT = "Selecionou Opção 1";
    String^ MENS = "Esta opção ficará esmaecida.\nExceto Reset.";
    MessageBoxButtons BOTS = MessageBoxButtons::OK;
    System::Windows::Forms::DialogResult RESP;
    MessageBoxIcon ICONE = MessageBoxIcon::Information;
    RESP = MessageBox::Show(this, MENS, TIT, BOTS, ICONE);
    return;
  }

  void Tela::AcionaOP2(Object^ obj, EventArgs^ ea)
  {
    OPCAO1->Enabled = false;
    OPCAO2->Enabled = false;
    OPCAO3->Enabled = true;
    OPCAO4->Enabled = true;
    String^ TIT = "Selecionou Opção 2";
    String^ MENS = "Esta opção ficará esmaecida.\nExceto Reset.";
    MessageBoxButtons BOTS = MessageBoxButtons::OK;
    System::Windows::Forms::DialogResult RESP;
    MessageBoxIcon ICONE = MessageBoxIcon::Information;
    RESP = MessageBox::Show(this, MENS, TIT, BOTS, ICONE);
    return;
  }

  void Tela::AcionaOP3(Object^ obj, EventArgs^ ea)
  {
    OPCAO1->Enabled = false;
    OPCAO2->Enabled = false;
    OPCAO3->Enabled = false;
    OPCAO4->Enabled = true;
    String^ TIT = "Selecionou Opção 3";
    String^ MENS = "Esta opção ficará esmaecida.\nExceto Reset.";
    MessageBoxButtons BOTS = MessageBoxButtons::OK;
    System::Windows::Forms::DialogResult RESP;
    MessageBoxIcon ICONE = MessageBoxIcon::Information;
    RESP = MessageBox::Show(this, MENS, TIT, BOTS, ICONE);
    return;
  }

  void Tela::AcionaOP4(Object^ obj, EventArgs^ ea)
  {
    OPCAO1->Enabled = true;
    OPCAO2->Enabled = true;
    OPCAO3->Enabled = true;
    OPCAO4->Enabled = false;
    return;
  }

}
