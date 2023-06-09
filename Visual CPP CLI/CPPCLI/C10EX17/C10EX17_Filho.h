// C10EX17.cpp - Janela Filho

static Int32 CONTA = 0;

ref class JanelaFilho: public Form
{

  private:
	
    void CriaJanela()
    {

      RichTextBox^ TEXTO = gcnew RichTextBox;
      TEXTO->Size = ClientSize;

      TEXTO->Anchor = static_cast<AnchorStyles>
      (
        AnchorStyles::Top    |
        AnchorStyles::Bottom |
        AnchorStyles::Left   |
        AnchorStyles::Right
      );

      TEXTO->TabIndex = 0;
      Controls->Add(TEXTO);
      return;
    }

  public:
	
    JanelaFilho(Form^ f)
    {

      Size = ::Size(280,180);
      FormBorderStyle = ::FormBorderStyle::SizableToolWindow;
      Text = "Janela Filha "  + CONTA.ToString();
      CriaJanela();
      MdiParent = f;
      return;

    }

};
