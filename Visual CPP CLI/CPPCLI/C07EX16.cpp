// C07EX16.CPP

#include "stdafx.h"
using namespace System;

int main()
{

  Console::WriteLine(Math::Acos(-1));               // =   3.141...
  Console::WriteLine(Math::Acos(0.5)*180/Math::PI); // =   0.000...

  Console::WriteLine(Math::Asin(-1));               // =  -1.570... 
  Console::WriteLine(Math::Asin(0.5)*180/Math::PI); // =  30.000...

  Console::WriteLine(Math::Atan(0.5));              // =   0.463...
  Console::WriteLine(Math::Atan(1)*180/Math::PI);   // =  45.000...

  Console::WriteLine(Math::Atan2(1,1));             // =   0.785...
  Console::WriteLine(Math::Atan2(-1,-1));           // =  -2.356...

  Console::WriteLine(Math::Cos(45*Math::PI/180));   // =   0.707...
  Console::WriteLine(Math::Cos(Math::Atan(1)));     // =   0.707...

  Console::WriteLine(Math::Cosh(45*Math::PI/180));  // =   xx
  Console::WriteLine(Math::Cosh(Math::Atan(1)));    // =   xx

  Console::WriteLine(Math::Sin(Math::PI/6));        // =   0.500...
  Console::WriteLine(Math::Sin(1));                 // =   0.841...

  Console::WriteLine(Math::Sinh(Math::PI/6));       // =   xx
  Console::WriteLine(Math::Sinh(1));                // =   xx

  Console::WriteLine(Math::Tan(4));                 // =   1.157...
  Console::WriteLine(Math::Tan(Math::PI/4));        // =   1.000...

  Console::WriteLine(Math::Tanh(4));                // =   xx
  Console::WriteLine(Math::Tanh(Math::PI/4));       // =   xx

  return 0;
}
