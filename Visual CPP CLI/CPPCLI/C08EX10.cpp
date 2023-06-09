// C08EX10.cpp

#include "stdafx.h"
using namespace System;

ref class TSALA
{
  public:
    TSALA(){}; // Construtor padrao
    ~TSALA(){}; // Destrutor padrao
  protected:
    Byte SALA;
};

// Definicao da classe filho TALUNO com pai TSALA

ref class TALUNO: public TSALA
{
  public:
    TALUNO(String^ NM, Byte DP) // Construtor com parametros
      {
         NOME = NM;
         DEPENDENCIA = DP;
      };
    ~TALUNO(){};
    void POENOTA(Single PT, Single FS, Single FL, Single HT);
    void PEGALUNO();
    Byte PEGASALA();
    void POESALA(Byte SL);
  protected:
    String ^NOME;
    Byte   DEPENDENCIA;
    Single PORTUGUES;
    Single MATEMATICA;
    Single FILOSOFIA;
    Single HISTORIA;
};

void TALUNO::POENOTA(Single PT, Single FS, Single FL, Single HT)
{
  PORTUGUES  = PT;
  MATEMATICA = FS;
  FILOSOFIA  = FL;
  HISTORIA   = HT;
  return;
}

void TALUNO::PEGALUNO()
{
  Console::WriteLine("Relatorio Escolar");
  Console::WriteLine();
  Console::Write("Nome do aluno......: ");
  Console::WriteLine(NOME);
  Console::Write("Sala...............: ");
  Console::WriteLine(SALA);
  Console::WriteLine();
  Console::Write("Media: Portugues...: ");
  Console::WriteLine(PORTUGUES);
  Console::Write("Media: Matematica..: ");
  Console::WriteLine(MATEMATICA);
  Console::Write("Media: Filosofia...: ");
  Console::WriteLine(FILOSOFIA);
  Console::Write("Media: Historia....: ");
  Console::WriteLine(HISTORIA);
  Console::WriteLine();
  if (DEPENDENCIA != 0)
    {
      if (DEPENDENCIA == 1)
        {
          Console::Write("O aluno esta com ");
          Console::Write(DEPENDENCIA);
          Console::WriteLine(" dependencia.");
        }
      else
        {
          Console::Write("O aluno esta com ");
          Console::Write(DEPENDENCIA);
          Console::WriteLine(" dependencias.");
        }
    }
  Console::WriteLine();
  return;
}

// Definicao da classe filho TPOSGRAD com pai TALUNO e avo TSALA

ref class TPOSGRAD: public TALUNO
{
  public:
    TPOSGRAD(Byte NG, String^ NM, Byte DP): TALUNO(NM, DP) 
      {
        GRAU = NG;
      };
    ~TPOSGRAD(){}; 
    void TITULACAO();
  private:
    int GRAU;
};

void TPOSGRAD::TITULACAO()
{
  Console::Write("Este aluno pleiteia o titulo de: ");
  switch(GRAU)
    {
      case 1: Console::WriteLine("Especialista.");  break;
      case 2: Console::WriteLine("Mestre.");        break;
      case 3: Console::WriteLine("Doutor.");        break;
      case 4: Console::WriteLine("Livre docente."); break;
    }
  Console::WriteLine();
  return;
}

Byte TALUNO::PEGASALA()
{
  return SALA;
}

void TALUNO::POESALA(Byte SL)
{
   SALA = SL;
   return;
}

Byte OPCAO, CONT, ACADEMICO, POSGRAD, ENTRASALA;
Single NTPT, NTMT, NTFL, NTHT;

Byte CADASTRO()
{
  CONT = 0;
  Console::WriteLine();
  Console::Write("Entre o sala....: ");;
  ENTRASALA = Byte::Parse(Console::ReadLine());
  Console::WriteLine();
  Console::WriteLine("Entre as notas de:");
  Console::WriteLine();
  Console::Write("Portugues.......: ");
  NTPT = Single::Parse(Console::ReadLine());
  if (NTPT < 7)
    CONT++;
  Console::Write("Matematica......: ");
  NTMT = Single::Parse(Console::ReadLine());
  if (NTMT < 7)
    CONT++;
  Console::Write("Filosofia.......: ");
  NTFL = Single::Parse(Console::ReadLine());
  if (NTFL < 7)
    CONT++;
  Console::Write("Historia........: ");
  NTHT = Single::Parse(Console::ReadLine());
  if (NTHT < 7)
    CONT++;
  return 0;
}

int main()
{
  String ^NOMEALU;
  Console::WriteLine("Entrada de dados escolares");
  Console::WriteLine();
  Console::WriteLine("Escolha o tipo de curso:");
  Console::WriteLine();
  Console::WriteLine("[1] - Graduacao");
  Console::WriteLine("[2] - Pos-Graduacao");
  Console::WriteLine();
  Console::Write("==> ");
  OPCAO = Byte::Parse(Console::ReadLine());
  Console::WriteLine();
  Console::Write("Entre o nome....: ");
  NOMEALU = Console::ReadLine();
  if (OPCAO == 1)
    {
      CADASTRO();
      TALUNO ALUNO(NOMEALU, CONT);
      ALUNO.POESALA(ENTRASALA);
      ALUNO.POENOTA(NTPT, NTMT, NTFL, NTHT);
      ALUNO.PEGALUNO();
    }
  if (OPCAO == 2)
    {
      Console::WriteLine();
      Console::WriteLine("Qual curso voce faz?");
      Console::WriteLine();
      Console::WriteLine("[1] - Especializacao");
      Console::WriteLine("[2] - Mestrado");
      Console::WriteLine("[3] - Doutorado");
      Console::WriteLine("[4] - Livre Docencia");
      Console::WriteLine();
      Console::Write("==> ");
      POSGRAD = Byte::Parse(Console::ReadLine());
      CADASTRO();
      ACADEMICO = POSGRAD;
      TPOSGRAD ALUNO(ACADEMICO, NOMEALU, CONT);
      ALUNO.POESALA(ENTRASALA);
      ALUNO.POENOTA(NTPT, NTMT, NTFL, NTHT);
      ALUNO.PEGALUNO();
      ALUNO.TITULACAO();
    }
  return 0;
}
