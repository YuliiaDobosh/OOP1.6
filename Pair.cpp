#include "Pair.h"
#include <iostream>
using namespace std;
string Pair::toString() const
{
	cout << endl;
	cout << "p1 = " << p1 << endl;
	cout << "p2 = " << p2 << endl;
	return string();
}
void Pair::Init(double p1, double p2)
{
	setp1(p1);
	setp2(p2);
}

void Pair::Display() const
{
	cout << toString() << endl;
}
void Pair::Read()
{
	double p1;
	double p2;
	cout << endl;
	cout << "p1 = ? "; cin >> p1;
	cout << "p2 = ? "; cin >> p2;
	Init(p1, p2);
}

double Pair::getDobytok() const
{
	return p1 * p2;
}

