// C10EX13.h

#pragma once
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

namespace MeuFormulario
{
  public ref class Tela: public Form
  {

    private:

      MenuStrip^ MENU_BAR;

      ToolStripMenuItem^ MENU1;
      ToolStripMenuItem^ MENU2;
      ToolStripMenuItem^ MENU3;

      ToolStripMenuItem^ OP1_MENU1;
      ToolStripMenuItem^ OP2_MENU1;
      ToolStripSeparator^ SEPARA; 
      ToolStripMenuItem^ OP3_MENU1;

      ToolStripMenuItem^ OP1_MENU13;
      ToolStripMenuItem^ OP2_MENU13;

      ToolStripMenuItem^ OP1_MENU2;
      ToolStripMenuItem^ OP2_MENU2;

      ToolStripMenuItem^ OP1_MENU3;

      void CriaMenu();

      void AcionaOP1M1(Object^ obj, EventArgs^ ea);
      void AcionaOP2M1(Object^ obj, EventArgs^ ea);
   
      void AcionaOP1M13(Object^ obj, EventArgs^ ea);
      void AcionaOP2M13(Object^ obj, EventArgs^ ea);

      void AcionaOP1M2(Object^ obj, EventArgs^ ea);
      void AcionaOP2M2(Object^ obj, EventArgs^ ea);

      void AcionaOP1M3(Object^ obj, EventArgs^ ea);

    public:
      Tela()
        {

          MENU_BAR = gcnew MenuStrip;

          MENU1 = gcnew ToolStripMenuItem("Menu &1");
          OP1_MENU1 = gcnew ToolStripMenuItem("Opção 1&1");
          OP2_MENU1 = gcnew ToolStripMenuItem("Opção 1&2");
          SEPARA = gcnew ToolStripSeparator;
          OP3_MENU1 = gcnew ToolStripMenuItem("Opção 1&3");

          OP1_MENU13 = gcnew ToolStripMenuItem("Sub Opção 13&1");
          OP2_MENU13 = gcnew ToolStripMenuItem("Sub Opção 13&2");

          OP3_MENU1 = gcnew ToolStripMenuItem("Opção 1&3");

          MENU2 = gcnew ToolStripMenuItem("Menu &2");
          OP1_MENU2 = gcnew ToolStripMenuItem("Opção 2&1");
          OP1_MENU2->ShortcutKeys = Keys::F2;
          OP2_MENU2 = gcnew ToolStripMenuItem("Opção 2&2");
          OP2_MENU2->ShortcutKeys = Keys::Control | Keys::X;

          MENU3 = gcnew ToolStripMenuItem("Menu &3");
          OP1_MENU3 = gcnew ToolStripMenuItem("Opção 3&1");

          Text = "Menu de Opções";
          Width = 315;
          Height = 200;
          StartPosition = FormStartPosition::CenterScreen;
          FormBorderStyle = ::FormBorderStyle::Fixed3D;

          Controls->Add(MENU_BAR);
   
          CriaMenu();
		  
          return;
        }
  };

  void Tela::CriaMenu()
  {

    // Menu 1

    MENU_BAR ->Items->Add(MENU1);
    MENU1->DropDownItems->Add(OP1_MENU1);
    MENU1->DropDownItems->Add(OP2_MENU1);
    MENU1->DropDownItems->Add(SEPARA);
    MENU1->DropDownItems->Add(OP3_MENU1);

    OP3_MENU1->DropDownItems->Add(OP1_MENU13);
    OP3_MENU1->DropDownItems->Add(OP2_MENU13);

    OP1_MENU1->Click += gcnew EventHandler(this, &Tela::AcionaOP1M1);
    OP2_MENU1->Click += gcnew EventHandler(this, &Tela::AcionaOP2M1);

    OP1_MENU13->Click += gcnew EventHandler
    (
      this, &Tela::AcionaOP1M13
    );
    OP2_MENU13->Click += gcnew EventHandler
    (
      this, &Tela::AcionaOP2M13
    );

    // Menu 2

    MENU_BAR ->Items->Add(MENU2);
    MENU2->DropDownItems->Add(OP1_MENU2);
    MENU2->DropDownItems->Add(OP2_MENU2);
    OP1_MENU2->Checked = true;

    OP1_MENU2->Click += gcnew EventHandler(this, &Tela::AcionaOP1M2);
    OP2_MENU2->Click += gcnew EventHandler(this, &Tela::AcionaOP2M2);

    // Menu 3

    MENU_BAR ->Items->Add(MENU3);
    MENU3->DropDownItems->Add(OP1_MENU3);

    OP1_MENU3->Click += gcnew EventHandler(this, &Tela::AcionaOP1M3);

    return;

  }

  void Tela::AcionaOP1M1(Object^ obj, EventArgs^ ea)
  {
    String^ TIT = "Menu 1 Acionado";
    String^ MENS = "Opção 1 Selecionada";
    MessageBoxButtons BOTS = MessageBoxButtons::OK;
    System::Windows::Forms::DialogResult RESP;
    MessageBoxIcon ICONE = MessageBoxIcon::Information;
    RESP = MessageBox::Show(this, MENS, TIT, BOTS, ICONE);
    return;
  }

  void Tela::AcionaOP2M1(Object^ obj, EventArgs^ ea)
  {
    String^ TIT = "Menu 1 Acionado";
    String^ MENS = "Opção 2 Selecionada";
    MessageBoxButtons BOTS = MessageBoxButtons::OK;
    System::Windows::Forms::DialogResult RESP;
    MessageBoxIcon ICONE = MessageBoxIcon::Information;
    RESP = MessageBox::Show(this, MENS, TIT, BOTS, ICONE);
    return;
  }

  void Tela::AcionaOP1M13(Object^ obj, EventArgs^ ea)
  {
    String^ TIT = "Menu 13 Acionado";
    String^ MENS = "Sub Opção 1 Selecionada";
    MessageBoxButtons BOTS = MessageBoxButtons::OK;
    System::Windows::Forms::DialogResult RESP;
    MessageBoxIcon ICONE = MessageBoxIcon::Information;
    RESP = MessageBox::Show(this, MENS, TIT, BOTS, ICONE);
    return;
  }

  void Tela::AcionaOP2M13(Object^ obj, EventArgs^ ea)
  {
    String^ TIT = "Menu 13 Acionado";
    String^ MENS = "Sub Opção 2 Selecionada";
    MessageBoxButtons BOTS = MessageBoxButtons::OK;
    System::Windows::Forms::DialogResult RESP;
    MessageBoxIcon ICONE = MessageBoxIcon::Information;
    RESP = MessageBox::Show(this, MENS, TIT, BOTS, ICONE);
    return;
  }

  void Tela::AcionaOP1M2(Object^ obj, EventArgs^ ea)
  {
    OP1_MENU2->Checked = true;
    OP2_MENU2->Checked = false;
    String^ TIT = "Menu 2 Acionado";
    String^ MENS = "Opção 1 Selecionada";
    MessageBoxButtons BOTS = MessageBoxButtons::OK;
    System::Windows::Forms::DialogResult RESP;
    MessageBoxIcon ICONE = MessageBoxIcon::Information;
    RESP = MessageBox::Show(this, MENS, TIT, BOTS, ICONE);
    return;
  }

  void Tela::AcionaOP2M2(Object^ obj, EventArgs^ ea)
  {
    OP1_MENU2->Checked = false;
    OP2_MENU2->Checked = true;
    String^ TIT = "Menu 2 Acionado";
    String^ MENS = "Opção 2 Selecionada";
    MessageBoxButtons BOTS = MessageBoxButtons::OK;
    System::Windows::Forms::DialogResult RESP;
    MessageBoxIcon ICONE = MessageBoxIcon::Information;
    RESP = MessageBox::Show(this, MENS, TIT, BOTS, ICONE);
    return;
  }

  void Tela::AcionaOP1M3(Object^ obj, EventArgs^ ea)
  {
    Application::Exit();
    return;
  }

}
