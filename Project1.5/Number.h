//Number.h
#pragma once
#include <string>

using namespace std;

class Number
{
	float flo;
public:
	float add(int);
	float division(int);

	void setFlo(float flo) { this->flo = flo; }
	float getFlo() const { return flo; };

	void Init(float flo);
	void Display() const;
	void Read();

	string toString() const;
};

