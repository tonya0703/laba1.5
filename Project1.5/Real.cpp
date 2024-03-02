//Real.cpp
#include "Real.h"
#include <iostream>
using namespace std;
void Real::Init(Number number)
{
	setNumber(number);
}

void Real::Display() const
{
	cout << endl;
	cout << "number: " << endl;
	number.Display(); // використовуємо делегування
}

void Real::Read()
{
	Number n;
	cout << endl;
	cout << "Number = ? " << endl;
	n.Read(); // використовуємо делегування
	Init(n);
}

float Real::power(Number number, int s)
{
	float f = number.getFlo();
	return pow(f, s);
}
double Real::loga(Number number)
{
	float f = number.getFlo();
	return log(f);
}