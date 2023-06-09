// C10EX02.h

#pragma once
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

namespace MeuFormulario
{
  public ref class Tela: public Form
  {

    private:
      Label^ ROTULO;
      void CriaRotulo();
    
    public:
      Tela()
        {
          ROTULO = gcnew Label;
          Text = "Formulário Tela";
          Size = ::Size(250,100);
          CriaRotulo();
		  return;
        }
  };
  
  void Tela::CriaRotulo()
  {
    ROTULO->AutoSize = true;
    ROTULO->Text = "Estudo de C++/CLI";
    ROTULO->Location = ::Point(20,18);
    ROTULO->Font = gcnew ::Font("Courier New", 12, ::FontStyle::Bold);
    ROTULO->ForeColor = Color::Blue;
    Controls->Add(ROTULO); 
	return;
  }

}
