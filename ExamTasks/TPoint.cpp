#include "TPoint.h"
#include <iostream>
#include <cmath>

/*
1 ���� ���������� ���� ����� �� ���������. �������� �������, ������������
����� ������� � ������� � ���� ������.
*/
double len(TPoint a, TPoint b)
{
    return sqrt(pow(a._x - b._x, 2.0));
}