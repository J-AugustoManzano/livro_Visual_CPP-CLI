// C07EX17.cpp

#include "stdafx.h"
using namespace System;

int main()
{

  Console::WriteLine(Math::Pow(2.0,3.0));         // =   8,000...
  Console::WriteLine(Math::Pow(2.0,0.0));         // =   1,000...

  Console::WriteLine(Math::Sqrt(144));            // =  12,000...
  Console::WriteLine(Math::Sqrt(Math::Sqrt(16))); // =   2,000...

  return 0;
}
