// C10EX03.h

#pragma once
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

namespace MeuFormulario
{
  public ref class Tela: public Form
  {

    private:
      Button^ BOTAO;
      void CriaBotao();
      void AcionaBotao(Object^ o, EventArgs^ ea);

    public:
      Tela()
        {
          BOTAO = gcnew Button;
          Text = "Formulário Tela";
          Size = ::Size(250,100);
          CriaBotao();
          return;
        }
  };

  void Tela::CriaBotao()
  {
    BOTAO->Height = 30;
    BOTAO->Width = 150;
    BOTAO->Text = "Fechar Formulário";
    BOTAO->Location = Point(20,18);
    BOTAO->Click += gcnew EventHandler (&Tela::AcionaBotao);
    Controls->Add(BOTAO); 
    return;
  }

  void Tela::AcionaBotao(Object^ o, EventArgs^ ea)
  {
    String^ MENS = "Fecha o formulário?";
    String^ ROT = "Sua resposta";
    MessageBoxButtons BOTS = MessageBoxButtons::YesNo;
    System::Windows::Forms::DialogResult RESP;
    RESP = MessageBox::Show(MENS, ROT, BOTS);
    if (RESP == ::DialogResult::Yes)
      Application::Exit();
    return;
  }

}
