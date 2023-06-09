// C10EX19.h

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

      MenuStrip^ MENU_BAR;
      ToolStripMenuItem^ MENU;
      ToolStripMenuItem^ OP1_MENU;
      ToolStripMenuItem^ OP2_MENU;
      void AcessaOpcao1(Object^ obj, EventArgs^ ea);
      void AcessaOpcao2(Object^ obj, EventArgs^ ea);
      void CriaMenu();

      StatusStrip^ BARRA;
      ToolStripStatusLabel^ MENSAGEM;
      void AcaoStatus0(Object^ obj, EventArgs^ ea);
      void AcaoStatus1(Object^ obj, EventArgs^ ea);
      void AcaoStatus2(Object^ obj, EventArgs^ ea);
      void CriaBarra();

      ToolStrip^ FERRAMENTA;
      ToolStripButton^ BOTAO1;
      ToolStripButton^ BOTAO2;
      void AcessaFer1(Object^ obj, EventArgs^ ea);
      void AcessaFer2(Object^ obj, EventArgs^ ea);
      void CriaFerramenta();

    public:
      Tela()
        {

          MENU_BAR = gcnew MenuStrip;
          MENU = gcnew ToolStripMenuItem("Potuguês");
          OP1_MENU = gcnew ToolStripMenuItem("Brasileiro");
          OP2_MENU = gcnew ToolStripMenuItem("Europeu");

          BARRA = gcnew StatusStrip;
          MENSAGEM = gcnew ToolStripStatusLabel;
          Controls->Add(BARRA);
          CriaBarra();

          FERRAMENTA = gcnew ToolStrip();
          BOTAO1 = gcnew ToolStripButton;
          BOTAO2 = gcnew ToolStripButton;
          FERRAMENTA->Items->Add(BOTAO1);
          FERRAMENTA->Items->Add(BOTAO2);
          CriaFerramenta();

          Controls->Add(FERRAMENTA);
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
    OP1_MENU->Image = Bitmap::FromFile(L"C:\\Icones\\Brazil.PNG");
    OP2_MENU->Image = Bitmap::FromFile(L"C:\\Icones\\Portugal.PNG");

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
    MENSAGEM->Text = "Acesso ao idioma Português brasileiro.";
    return;
  }

  void Tela::AcaoStatus2(Object^ obj, EventArgs^ ea)
  {
    MENSAGEM->Text = "Acesso ao idioma Português europeu.";
    return;
  }

  void Tela::AcessaOpcao1(Object^ obj, EventArgs^ ea)
  {
    MENSAGEM->Text = "Português brasileiro selecionado.";
    return;
  }

  void Tela::AcessaOpcao2(Object^ obj, EventArgs^ ea)
  {
    MENSAGEM->Text = "Português europeu selecionada.";
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

  void Tela::CriaFerramenta()
  {

    FERRAMENTA->Dock = DockStyle::Top;
    FERRAMENTA->GripStyle = ToolStripGripStyle::Visible;
    FERRAMENTA->LayoutStyle =
      ToolStripLayoutStyle::HorizontalStackWithOverflow;
    FERRAMENTA->Items->Add(BOTAO1);
    FERRAMENTA->Items->Add(BOTAO2);

    BOTAO1->DisplayStyle = ToolStripItemDisplayStyle::Image;
    BOTAO1->Text = "Ativa Português europeu.";
    BOTAO1->Image = Bitmap::FromFile(L"C:\\Icones\\Portugal.PNG");

    BOTAO2->DisplayStyle = ToolStripItemDisplayStyle::Image;
    BOTAO2->Text = "Ativa Português brasileiro.";
    BOTAO2->Image = Bitmap::FromFile(L"C:\\Icones\\Brazil.PNG");

    BOTAO1->Click += gcnew EventHandler 
    (
      this, &Tela::AcessaFer1
    ); 

    BOTAO2->Click += gcnew EventHandler 
    (
      this, &Tela::AcessaFer2
    ); 

    return; 
  }

  void Tela::AcessaFer1(Object^ obj, EventArgs^ ea)
  {
    MENSAGEM->Text = "Botão Português europeu foi acionado.";
    return;
  }

  void Tela::AcessaFer2(Object^ obj, EventArgs^ ea)
  {
    MENSAGEM->Text = "Botão Português brasileiro foi acionado.";
    return;
  }

}
