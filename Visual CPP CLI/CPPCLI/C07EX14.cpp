// C07EX14.cpp

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

  {
    using namespace soma;
    RESULTADO = 5 + 3;
    Console::WriteLine(RESULTADO);
  }

  {
    using namespace quociente;
    RESULTADO = 5.0 / 3.0;
    Console::WriteLine(RESULTADO);
  }

  {
    using namespace produto;
    RESULTADO = 5 * 3;
    Console::WriteLine(RESULTADO);
  }

  {
    using namespace diferenca;
    RESULTADO = 5 - 3;
    Console::WriteLine(RESULTADO);
  }

  return 0;
}
