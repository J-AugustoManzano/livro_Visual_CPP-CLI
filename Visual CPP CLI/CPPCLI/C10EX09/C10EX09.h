// C10EX09.h

#pragma once
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

namespace MeuFormulario
{
  public ref class Tela: public Form
  {

    private:

      ListBox^ LISTA;
      Button^ BOTAO;
      Label^ ROTULO;

      void CriaLista();
      void CriaBotao();
      void CriaRotulo();
      void AcionaBotao(Object^ obj, EventArgs^ ea);
      void AcionaLista(Object^ obj, EventArgs^ ea);

    public:
      Tela()
        {

          LISTA = gcnew ListBox;
          BOTAO = gcnew Button;
          ROTULO = gcnew Label;

          Text = "Selecione";
          Width = 170;
          Height = 240;
          StartPosition = FormStartPosition::CenterScreen;
          MaximizeBox = false;
          MinimizeBox = false;
          FormBorderStyle = ::FormBorderStyle::Fixed3D;

          CriaLista();
          CriaBotao();
          CriaRotulo();
		  
          return;
        }
  };

  void Tela::CriaLista()
  {
    LISTA->ScrollAlwaysVisible = true;
    LISTA->Location = Point(25,48);
    LISTA->Size = ::Size(100,100);
    LISTA->Items->AddRange
      (
        gcnew array<System::Object^>
          {
            "Op��o 9",
            "Op��o 8",
            "Op��o 7",
            "Op��o 6",
            "Op��o 5",
            "Op��o 4",
            "Op��o 3",
            "Op��o 2",
            "Op��o 1",
            "Op��o 0",
          }   
      )
    ;
    LISTA->SelectedIndex = 0;
    LISTA->SelectionMode = SelectionMode::One;
    LISTA->Sorted = true;
    LISTA->SelectedIndexChanged += gcnew EventHandler 
      (
        this, &Tela::AcionaLista
      )
    ;
    Controls->Add(LISTA);
    return;
  }

  void Tela::AcionaLista(Object^ obj, EventArgs^ ea)
  {
    if (obj = LISTA)
      ROTULO->Text = LISTA->SelectedItem->ToString();
    return;
  }

  void Tela::CriaBotao()
  {
    BOTAO->Height = 23;
    BOTAO->Width = 100;
    BOTAO->Text = "Sair";
    BOTAO->Location = Point(25,150);
    BOTAO->Click += gcnew EventHandler (this, &Tela::AcionaBotao);
    Controls->Add(BOTAO); 
    return;
  }

  void Tela::AcionaBotao(Object^ obj, EventArgs^ ea)
  {
    Application::Exit();
    return;
  }

  void Tela::CriaRotulo()
  {
    ROTULO->Text = LISTA->SelectedItem->ToString();
    ROTULO->AutoSize = true;
    ROTULO->Location = ::Point(25,18);
    Controls->Add(ROTULO); 
    return;
  }

}
