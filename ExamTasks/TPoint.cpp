#include "TPoint.h"
#include <iostream>
#include <cmath>

/*
1 Даны координаты двух точек на плоскости. Написать функцию, определяющую
длину отрезка с концами в этих точках.
*/
double len(TPoint a, TPoint b)
{
    return sqrt(pow(a._x - b._x, 2.0));
}