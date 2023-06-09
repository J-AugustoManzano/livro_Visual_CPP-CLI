// C10EX01.h

#pragma once
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

namespace MeuFormulario
{
  public ref class Tela: public Form
  {
    public:
      Tela()
        {
          this->Text = "Formulário Tela";
          this->Size = System::Drawing::Size(400,400);
          this->FormBorderStyle = ::FormBorderStyle::Fixed3D;
          StartPosition = FormStartPosition::CenterScreen;
          MaximizeBox = false;
          MinimizeBox = false;
		  return;
        }
  };
}
