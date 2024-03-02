//Main.cpp
#include "Real.h"
#include <iostream>

using namespace std;

Real makeReal() {
	Real r;
	r.Read();
	r.Display();
	return r;
}

Number makeNumber() {
	Number n;
	n.Read();
	n.Display();
	return n;
}

int main()
{
	int i;
	Real r = makeReal();

	Number n = makeNumber();

	cout << "(add)i = ? "; cin >> i;
	double a = n.add(i);
	cout << " add = " << a << endl;
	cout << "(divisor)i = ? "; cin >> i;
	double d = n.division(i);
	cout << " division = " << d << endl;

	cout << "(pow)i = ? "; cin >> i;
	double p = r.power(n, i);
	double l = r.loga(n);
	cout << " power = " << p << endl;
	cout << " log = " << l << endl;

	cout << n.toString();
}