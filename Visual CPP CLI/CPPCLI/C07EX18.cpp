// C07EX18.cpp

#include "stdafx.h"
using namespace System;

int main()
{

  Console::WriteLine(Math::Abs(-8.238765));  // =   8,238...
  Console::WriteLine(Math::Abs(-2.03));       // =   2,030...

  Console::WriteLine(Math::Ceiling(2.03));   // =   3,000...
  Console::WriteLine(Math::Ceiling(-2.03));  // =  -2,000...

  Console::WriteLine(Math::Floor(2.03));     // =   2,000...
  Console::WriteLine(Math::Floor(-2.03));    // =  -3,000...

  Console::WriteLine(Math::Truncate(2.03));  // =   2
  Console::WriteLine(Math::Truncate(-2.03)); // =  -3

  return 0;
}
