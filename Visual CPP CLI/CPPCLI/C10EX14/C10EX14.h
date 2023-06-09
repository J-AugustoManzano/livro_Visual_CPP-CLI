// C10EX14.h

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
      ToolStripSeparator^ SEPARA; 
      ToolStripMenuItem^ OPCAO3;

      void CriaMenu();

      void AcionaOP1(Object^ obj, EventArgs^ ea);
      void AcionaOP2(Object^ obj, EventArgs^ ea);
      void AcionaOP3(Object^ obj, EventArgs^ ea);

    public:
      Tela()
        {

          CONTEXTO = gcnew System::Windows::Forms::ContextMenuStrip;

          OPCAO1 = gcnew ToolStripMenuItem("Opção &1");
          OPCAO2 = gcnew ToolStripMenuItem("Opção &2");
          SEPARA = gcnew ToolStripSeparator;
          OPCAO3 = gcnew ToolStripMenuItem("Opção &3");

          OPCAO1->ShortcutKeys = Keys::F2;
          OPCAO2->ShortcutKeys = Keys::Control | Keys::X;

          Text = "Menu de Contexto";
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

    // Menu 1

    CONTEXTO->Items->Add(OPCAO1);
    CONTEXTO->Items->Add(OPCAO2);
    CONTEXTO->Items->Add(SEPARA);
    CONTEXTO->Items->Add(OPCAO3);

    OPCAO1->Click += gcnew EventHandler(this, &Tela::AcionaOP1);
    OPCAO2->Click += gcnew EventHandler(this, &Tela::AcionaOP2);
    OPCAO3->Click += gcnew EventHandler(this, &Tela::AcionaOP3);

    return;

  }

  void Tela::AcionaOP1(Object^ obj, EventArgs^ ea)
  {
    String^ TIT = "Menu de Contexto";
    String^ MENS = "Opção 1 Selecionada";
    MessageBoxButtons BOTS = MessageBoxButtons::OK;
    System::Windows::Forms::DialogResult RESP;
    MessageBoxIcon ICONE = MessageBoxIcon::Information;
    RESP = MessageBox::Show(this, MENS, TIT, BOTS, ICONE);
    return;
  }

  void Tela::AcionaOP2(Object^ obj, EventArgs^ ea)
  {
    String^ TIT = "Menu de Contexto";
    String^ MENS = "Opção 2 Selecionada";
    MessageBoxButtons BOTS = MessageBoxButtons::OK;
    System::Windows::Forms::DialogResult RESP;
    MessageBoxIcon ICONE = MessageBoxIcon::Information;
    RESP = MessageBox::Show(this, MENS, TIT, BOTS, ICONE);
    return;
  }

  void Tela::AcionaOP3(Object^ obj, EventArgs^ ea)
  {
    String^ TIT = "Menu de Contexto";
    String^ MENS = "Opção 3 Selecionada";
    MessageBoxButtons BOTS = MessageBoxButtons::OK;
    System::Windows::Forms::DialogResult RESP;
    MessageBoxIcon ICONE = MessageBoxIcon::Information;
    RESP = MessageBox::Show(this, MENS, TIT, BOTS, ICONE);
    return;
  }

}
