// C10EX17.h - Tela Pai

#pragma once
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;
#include "C10EX17_Filho.h"

namespace MeuFormulario
{
  public ref class TelaPai: public Form
  {

    private:

      MenuStrip^ MENU_BAR;
      ToolStripMenuItem^ MENU;
      ToolStripMenuItem^ OP1_MENU;
      ToolStripMenuItem^ OP2_MENU;

      void CriaMenu();
      void CriaJanela(Object^ obj, EventArgs^ ea);
      void FechJanela(Object^ obj, EventArgs^ ea);

    public:

      TelaPai()
      {

        IsMdiContainer = true;

        MENU_BAR = gcnew MenuStrip;

        MENU = gcnew ToolStripMenuItem("Janela");
        MENU->BackColor = Color::Orange;
        MENU->ForeColor = Color::DarkBlue;

        OP1_MENU = gcnew ToolStripMenuItem("Criar janela");
        OP2_MENU = gcnew ToolStripMenuItem("Fechar janela");

        Text = "Aplicativo MDI - Gerenciamento de Janelas";
        ClientSize = ::Size(460,340);
        StartPosition = FormStartPosition::CenterScreen;
        FormBorderStyle = ::FormBorderStyle::Fixed3D;
        Controls->Add(MENU_BAR);

        CriaMenu();
        return;

      }

    };

  void TelaPai::CriaMenu()
  {

    MENU_BAR->Items->Add(MENU);

    MENU->DropDownItems->Add(OP1_MENU);
    MENU->DropDownItems->Add(OP2_MENU);

    OP1_MENU->Click += gcnew EventHandler 
    (
      this, &TelaPai::CriaJanela
    );
    
	OP2_MENU->Click += gcnew EventHandler 
    (
      this, &TelaPai::FechJanela
    );
 
	OP2_MENU->Enabled = false;

    return;

  }

  void TelaPai::CriaJanela(Object^ obj, EventArgs^ ea)
  {

    CONTA += 1;

    JanelaFilho ^FILHO = gcnew JanelaFilho(this);
    FILHO->Show();
    if (ActiveMdiChild != nullptr)
      OP2_MENU->Enabled = true;
    else
      OP2_MENU->Enabled = false;
    FILHO->Closed += gcnew EventHandler(this, &TelaPai::FechJanela);  
    return;
  
  }

  void TelaPai::FechJanela(Object^ obj, EventArgs^ ea)
  {

    Form^ f = ActiveMdiChild;

    if (ActiveMdiChild != nullptr)
    {
      f->Closed -= gcnew EventHandler(this, &TelaPai::FechJanela);
      f->Close();
    }

    if (ActiveMdiChild == nullptr)
      OP2_MENU->Enabled = false;
    return;

  }

};
