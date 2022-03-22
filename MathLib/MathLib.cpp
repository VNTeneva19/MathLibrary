#include "pch.h"
#include "MathLib.h"

void triangle(int a, int b, int c)
{
	int p;

	std::cout << "P = " << a + b + c;

	p = (a + b + c) / 2;

	std::cout << "S = " << sqrt(p * (p - a) * (p - b) * (p - c));

}
