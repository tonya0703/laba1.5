//Number.cpp
#include "Number.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void Number::Init(float flo)
{
	setFlo(flo);
}

void Number::Display() const
{
	cout << endl;
	cout << "float = " << flo << endl;
}

void Number::Read()
{
	float flo;
	cout << endl;
	cout << "float = ? "; cin >> flo;
	Init(flo);
}

float Number::add(int a)
{
	float f = getFlo();
	return f + a;

}

float Number::division(int b)
{
	float f = getFlo();
	return f / b;
}

string Number::toString() const {
	stringstream sout;
	sout << "Float: " << getFlo();
	return sout.str();
}