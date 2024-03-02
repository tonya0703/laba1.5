//Real.h
#pragma once
#include "Number.h"
class Real
{
	Number number;

public:

	float power(Number number, int s);
	double loga(Number number);

	void Init(Number number);
	void Display() const;
	void Read();

	void setNumber(Number number) { this->number = number; }
	Number getNumber() const { return number; };

};
