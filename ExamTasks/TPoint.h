#pragma once

struct TPoint
{
    double _x;

    TPoint()
    {
        _x = 0.0;
    }

    TPoint(double x)
    {
        _x = x;
    }
};

double len(TPoint a, TPoint b);

