// C10EX05.h

#pragma once
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

namespace MeuFormulario
{
  public ref class Tela: public Form
  {

    private:
      Label^ ROTULO1;
      TextBox^ TEXTO;
      Button^ BOTAO1;
      Button^ BOTAO2;
      Label^ ROTULO2;
      void CriaRotulo1();
      void CriaTexto();
      void CriaBotao1();
      void AcionaBotao1(Object^ obj, EventArgs^ ea);
      void CriaBotao2();
      void AcionaBotao2(Object^ obj, EventArgs^ ea);
      void CriaRotulo2();

    public:
      Tela()
        {

          ROTULO1 = gcnew Label;
          TEXTO = gcnew TextBox;
          BOTAO1 = gcnew Button;
          BOTAO2 = gcnew Button;
          ROTULO2 = gcnew Label;

          Text = "Entrada de Nome";
          Width = 400;
          Height = 227;
          Font = gcnew ::Font("Microsoft Sans Serif", 8.25,
            ::FontStyle::Regular);
          StartPosition = FormStartPosition::CenterScreen;
          MaximizeBox = false;
          MinimizeBox = false;
          FormBorderStyle = ::FormBorderStyle::Fixed3D;

          CriaRotulo1();
          CriaTexto();
          CriaBotao1();
          CriaBotao2();
          CriaRotulo2();
          return;

        }
  };

  void Tela::CriaRotulo1()
  {
    ROTULO1->AutoSize = true;
    ROTULO1->Font = gcnew ::Font("Microsoft Sans Serif", 8.25,
      ::FontStyle::Italic);
    ROTULO1->Text = "Informe seu nome:";
    ROTULO1->Location = Point(25,25);
    ROTULO1->Size = System::Drawing::Size(94,13);
    Controls->Add(ROTULO1); 
    return;
  }

  void Tela::CriaTexto()
  {
    TEXTO->Location = Point(131,25);
    TEXTO->Size = System::Drawing::Size(221,20);
    Controls->Add(TEXTO); 
    return;
  }

  void Tela::CriaBotao1()
  {
    BOTAO1->Height = 23;
    BOTAO1->Width = 75;
    BOTAO1->Font = gcnew ::Font("Microsoft Sans Serif", 8.25,
      ::FontStyle::Bold);
    BOTAO1->ForeColor = Color::Blue;
    BOTAO1->Text = "Processar";
    BOTAO1->Location = Point(28,84);
    BOTAO1->Click += gcnew EventHandler (this, &Tela::AcionaBotao1);
    Controls->Add(BOTAO1); 
    return;
  }

  void Tela::AcionaBotao1(Object^ obj, EventArgs^ ea)
  {
    ROTULO2->Text = "Olá, " + TEXTO->Text + ", seja bem vindo!";
    TEXTO->Clear();
    TEXTO->Focus();
    return;
  }

  void Tela::CriaBotao2()
  {
    BOTAO2->Height = 23;
    BOTAO2->Width = 75;
    BOTAO2->Font = gcnew ::Font("Microsoft Sans Serif", 8.25,
      ::FontStyle::Bold);
    BOTAO2->ForeColor = Color::Red;
    BOTAO2->Text = "Sair";
    BOTAO2->Location = Point(131,84);
    BOTAO2->Click += gcnew EventHandler (this, &Tela::AcionaBotao2);
    Controls->Add(BOTAO2); 
    return;
  }

  void Tela::AcionaBotao2(Object^ obj, EventArgs^ ea)
  {
    String^ MENS = "A aplicação será encerrada!";
    String^ ROT = "Entrada de Nome";
    MessageBoxButtons BOTS = MessageBoxButtons::OK;
    MessageBoxIcon ICONE = MessageBoxIcon::Information;
    System::Windows::Forms::DialogResult RESP;
    RESP = MessageBox::Show(this, MENS, ROT, BOTS, ICONE);
    if (RESP == ::DialogResult::OK)
      Application::Exit();
    return;
  }

  void Tela::CriaRotulo2()
  {
    ROTULO2->AutoSize = true;
    ROTULO2->Text = "";
    ROTULO2->Location = Point(25,143);
    ROTULO2->Size = System::Drawing::Size(39,13);
    Controls->Add(ROTULO2); 
    return;
  }

}
