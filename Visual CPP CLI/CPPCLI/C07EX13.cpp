// C07EX13.cpp

#include "stdafx.h"
using namespace System;

namespace soma
{
  Int32 RESULTADO;
}

namespace quociente
{
  Single RESULTADO;
}

namespace produto
{
  Int64 RESULTADO;
}

namespace diferenca
{
  Double RESULTADO;
}

int main(void)
{

  using namespace produto;

  soma::RESULTADO = 5 + 3;
  Console::WriteLine(soma::RESULTADO);

  quociente::RESULTADO = 5 / 3;
  Console::WriteLine(quociente::RESULTADO);

  produto::RESULTADO = 5 * 3;
  Console::WriteLine(produto::RESULTADO);

  diferenca::RESULTADO = 5 - 3;
  Console::WriteLine(diferenca::RESULTADO);

  return 0;
}
