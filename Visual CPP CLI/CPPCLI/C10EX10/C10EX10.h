// C10EX10.h

#pragma once
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

namespace MeuFormulario
{
  public ref class Tela: public Form
  {

    private:

      CheckedListBox^ LISTACOMBO;
      Button^ BOTAO;
      Label^ ROTULO;

      void CriaListaCombo();
      void CriaBotao();
      void CriaRotulo();
      void AcionaBotao(Object^ obj, EventArgs^ ea);
      void AcionaListaCombo(Object^ obj, ItemCheckEventArgs^ icea);

    public:
      Tela()
        {

          LISTACOMBO = gcnew CheckedListBox;
          BOTAO = gcnew Button;
          ROTULO = gcnew Label;

          Text = "Selecione";
          Width = 170;
          Height = 240;
          StartPosition = FormStartPosition::CenterScreen;
          MaximizeBox = false;
          MinimizeBox = false;
          FormBorderStyle = ::FormBorderStyle::Fixed3D;

          CriaListaCombo();
          CriaBotao();
          CriaRotulo();
		  
          return;
        }
  };

  void Tela::CriaListaCombo()
  {
    array<String^> ^LISTA =
      {
        "Opção 1",
        "Opção 2",
        "Opção 3",
        "Opção 4",
        "Opção 5",
        "Opção 6",
        "Opção 7",
      };   
    LISTACOMBO->Location = Point(25,48);
    LISTACOMBO->Size = ::Size(100,100);
    LISTACOMBO->Items->AddRange(LISTA);
    LISTACOMBO->SelectedIndex = 0;
    LISTACOMBO->ItemCheck += gcnew ItemCheckEventHandler 
      (
        this, &Tela::AcionaListaCombo
      )
    ;
    Controls->Add(LISTACOMBO);
    return;
  }

  void Tela::AcionaListaCombo(Object^ obj, ItemCheckEventArgs^ icea)
  {
    if (obj = LISTACOMBO)
      ROTULO->Text = LISTACOMBO->SelectedItem->ToString();
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
    ROTULO->AutoSize = true;
    ROTULO->Location = ::Point(25,18);
    Controls->Add(ROTULO); 
    return;
  }

}
