// C07EX12.cpp

#include "stdafx.h"

namespace soma
{
  System::Int32 RESULTADO;
}

namespace quociente
{
  System::Single RESULTADO;
}

namespace produto
{
  System::Int64 RESULTADO;
}

namespace diferenca
{
  System::Double RESULTADO;
}

int main(void)
{

  soma::RESULTADO = 5 + 3;
  System::Console::WriteLine(soma::RESULTADO);

  quociente::RESULTADO = 5.0 / 3.0;
  System::Console::WriteLine(quociente::RESULTADO);

  produto::RESULTADO = 5 * 3;
  System::Console::WriteLine(produto::RESULTADO);

  diferenca::RESULTADO = 5 - 3;
  System::Console::WriteLine(diferenca::RESULTADO);

  return 0;
}
