// C10EX15.h

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

      void CriaMenu();

      void AcionaOP1(Object^ obj, EventArgs^ ea);
      void AcionaOP2(Object^ obj, EventArgs^ ea);

    public:
      Tela()
        {

          CONTEXTO = gcnew ::ContextMenuStrip;

          OPCAO1 = gcnew ToolStripMenuItem
          (
            Image::FromFile(L"C:\\Icones\\Brazil.PNG")
          );
          OPCAO1->Text = "Português (Brasil)";
          OPCAO1->ShortcutKeys = Keys::Control | Keys::B;

          OPCAO2 = gcnew ToolStripMenuItem
          (
            Image::FromFile(L"C:\\Icones\\Portugal.PNG")
          );
          OPCAO2->Text = "Português (Portugal)";
          OPCAO2->ShortcutKeys = Keys::Control | Keys::P;

          Text = "Seleção de Idioma";
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

    OPCAO1->Click += gcnew EventHandler(this, &Tela::AcionaOP1);
    OPCAO2->Click += gcnew EventHandler(this, &Tela::AcionaOP2);

    return;

  }

  void Tela::AcionaOP1(Object^ obj, EventArgs^ ea)
  {
    String^ TIT = "Idioma";
    String^ MENS = "Português\nBrasil";
    MessageBoxButtons BOTS = MessageBoxButtons::OK;
    System::Windows::Forms::DialogResult RESP;
    MessageBoxIcon ICONE = MessageBoxIcon::Information;
    RESP = MessageBox::Show(this, MENS, TIT, BOTS, ICONE);
    return;
  }

  void Tela::AcionaOP2(Object^ obj, EventArgs^ ea)
  {
    String^ TIT = "Idioma";
    String^ MENS = "Português\nPortugal";
    MessageBoxButtons BOTS = MessageBoxButtons::OK;
    System::Windows::Forms::DialogResult RESP;
    MessageBoxIcon ICONE = MessageBoxIcon::Information;
    RESP = MessageBox::Show(this, MENS, TIT, BOTS, ICONE);
    return;
  }

}
