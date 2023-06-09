// C10EX04.h

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
      void AcionaBotao(Object^ obj, EventArgs^ ea);

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
    BOTAO->Text = "Clique este botão";
    BOTAO->Location = Point(20,18);
    BOTAO->Click += gcnew EventHandler (this, &Tela::AcionaBotao);
    Controls->Add(BOTAO); 
    return;
  }

  void Tela::AcionaBotao(Object^ obj, EventArgs^ ea)
  {

    String^ MENS = "Mensagem";
    String^ ROT = "Título";
    System::Windows::Forms::DialogResult RESP;

    MessageBoxButtons BOTS1 = MessageBoxButtons::YesNo;
    RESP = MessageBox::Show(this, MENS, ROT, BOTS1);

    MessageBoxButtons BOTS2 = MessageBoxButtons::YesNoCancel;
    RESP = MessageBox::Show(this, MENS, ROT, BOTS2);

    MessageBoxButtons BOTS3 = MessageBoxButtons::RetryCancel;
    RESP = MessageBox::Show(this, MENS, ROT, BOTS3);

    MessageBoxButtons BOTS4 = MessageBoxButtons::OKCancel;
    RESP = MessageBox::Show(this, MENS, ROT, BOTS4);

    MessageBoxButtons BOTS5 = MessageBoxButtons::AbortRetryIgnore;
    RESP = MessageBox::Show(this, MENS, ROT, BOTS5);

    MessageBoxButtons BOTS6 = MessageBoxButtons::OK;
    RESP = MessageBox::Show(this, MENS, ROT, BOTS6);

    MessageBoxIcon ICONE1 = MessageBoxIcon::Error;
    RESP = MessageBox::Show(this, MENS, ROT, BOTS6, ICONE1);

    MessageBoxIcon ICONE2 = MessageBoxIcon::Information;
    RESP = MessageBox::Show(this, MENS, ROT, BOTS6, ICONE2);

    MessageBoxIcon ICONE3 = MessageBoxIcon::Question;
    RESP = MessageBox::Show(this, MENS, ROT, BOTS6, ICONE3);

    MessageBoxIcon ICONE4 = MessageBoxIcon::Warning;
    RESP = MessageBox::Show(this, MENS, ROT, BOTS6, ICONE4);

    return;
  }

}
