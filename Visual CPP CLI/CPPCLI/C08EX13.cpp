// CEX13.cpp

#include "stdafx.h"
using namespace System;

ref class TAREA
{
  public:
    Int64 Area(Int32 X)
    {
      Int64 AREA = X * X;
      return AREA;
    }

    double Area(Single R, Single H)
    {
      Double AREA = R * R * 3.14159 * H;
      return AREA;
    }

    Int32 Area(Int32 X, Int32 Y, Int32 Z)
    {
      Int32 AREA = X * Y * Z;
      return AREA;
    }

};

int main()
{
  TAREA^ CALC = gcnew TAREA;
  Console::WriteLine("Area: Quadrado ..: " + CALC->Area(5));
  Console::WriteLine("Area: Cubo ......: " + CALC->Area(5, 6, 7));
  Console::WriteLine("Area: Cilindro ..: " + CALC->Area(7, 3));
  return 0;
}
