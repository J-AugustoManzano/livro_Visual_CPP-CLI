// C10EX18.h

#pragma once

#using <System.dll>
#using <System.Windows.Forms.dll>
#using <System.Drawing.dll>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

namespace MeuFormulario
{
  public ref class Tela: public Form
  {

    private:

      StatusStrip^ BARRA;
      ToolStripStatusLabel^ MENSAGEM;
      void CriaBarra();

      void AcaoStatus0(Object^ obj, EventArgs^ ea);
      void AcaoStatus1(Object^ obj, EventArgs^ ea);
      void AcaoStatus2(Object^ obj, EventArgs^ ea);

      MenuStrip^ MENU_BAR;
      ToolStripMenuItem^ MENU;
      ToolStripMenuItem^ OP1_MENU;
      ToolStripMenuItem^ OP2_MENU;
      void CriaMenu();

      void AcessaOpcao1(Object^ obj, EventArgs^ ea);
      void AcessaOpcao2(Object^ obj, EventArgs^ ea);

    public:
      Tela()
        {

          BARRA = gcnew StatusStrip;
          MENSAGEM = gcnew ToolStripStatusLabel;
          Controls->Add(BARRA);
          CriaBarra();

          MENU_BAR = gcnew MenuStrip;
          MENU = gcnew ToolStripMenuItem("Arquivo");
          OP1_MENU = gcnew ToolStripMenuItem("Opção 1");
          OP2_MENU = gcnew ToolStripMenuItem("Opção 2");
          Controls->Add(MENU_BAR);

          Text = "Barra de Status";
          ClientSize = ::Size(460,340);
          StartPosition = FormStartPosition::CenterScreen;
          FormBorderStyle = ::FormBorderStyle::Fixed3D;
          CriaMenu();

          return;

        }
  };

  void Tela::CriaMenu()
  {

    MENU_BAR->Items->Add(MENU);

    MENU->DropDownItems->Add(OP1_MENU);
    MENU->DropDownItems->Add(OP2_MENU);

    OP1_MENU->Click += gcnew EventHandler 
    (
      this, &Tela::AcessaOpcao1
    );

    OP2_MENU->Click += gcnew EventHandler 
    (
      this, &Tela::AcessaOpcao2
    );

    MENU->MouseHover += gcnew EventHandler
    (
      this, &Tela::AcaoStatus0
    );

    OP1_MENU->MouseHover += gcnew EventHandler
    (
      this, &Tela::AcaoStatus1
    );

    OP2_MENU->MouseHover += gcnew EventHandler
    (
      this, &Tela::AcaoStatus2
    );

    return;
  }

  void Tela::AcaoStatus0(Object^ obj, EventArgs^ ea)
  {
    MENSAGEM->Text = "";
    return;
  }

  void Tela::AcaoStatus1(Object^ obj, EventArgs^ ea)
  {
    MENSAGEM->Text = "Acesso a opção 1 do menu.";
    return;
  }

  void Tela::AcaoStatus2(Object^ obj, EventArgs^ ea)
  {
    MENSAGEM->Text = "Acesso a opção 2 do menu.";
    return;
  }

  void Tela::AcessaOpcao1(Object^ obj, EventArgs^ ea)
  {
    MENSAGEM->Text = "A opção 1 foi selecionada.";
    return;
  }

  void Tela::AcessaOpcao2(Object^ obj, EventArgs^ ea)
  {
    MENSAGEM->Text = "A opção 2 foi selecionada.";
    return;
  }

  void Tela::CriaBarra()
  {

    BARRA->Dock = DockStyle::Bottom;
    BARRA->GripStyle = ToolStripGripStyle::Visible;
    BARRA->Items->Add(MENSAGEM);
    BARRA->LayoutStyle =
      ToolStripLayoutStyle::HorizontalStackWithOverflow;
    BARRA->SizingGrip = false;

    return; 
  }

}
