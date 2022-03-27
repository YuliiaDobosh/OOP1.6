#include "Rectangle.h"
#include <iostream>
using namespace std;
void Rectangle::Init(double p1, double p2)
{
	pair.Init(p1, p2);
}
void Rectangle::Display() const
{
	pair.Display();
}
string Rectangle::toString() const
{
	stringstream sout;
	pair.toString();
	return string();
}
bool Rectangle::setp1(double value)
{
	if (value > 0)
	{
		pair.setp1(value);
		return true;
	}
	else
	{
		pair.setp1(0);
		return false;
	}
}
bool Rectangle::setp2(double value)
{
	if (value > 0)
	{
		pair.setp2(value);
		return true;
	}
	else
	{
		pair.setp2(0);
		return false;
	}
}

void Rectangle::Read()
{
	Rectangle::Pair pair;
	double p1;
	double p2;
	cout << endl;
	cout << "p1 = ? "; cin >> p1;
	cout << "p2 = ? "; cin >> p2;
	Init(p1, p2);
}
string Rectangle::Pair::toString() const
{
	stringstream m;
	m << p1 << "," << p2;
	return m.str();
}
void Rectangle::Pair::Init(double p1, double p2)
{
	setp1(p1);
	setp2(p2);
}
void Rectangle::Pair::Display() const
{
	cout << toString() << endl;
}
void Rectangle::Pair::Read()
{
	double p1;
	double p2;
	cout << endl;
	cout << "p1 = ? "; cin >> p1;
	cout << "p2 = ? "; cin >> p2;
	Init(p1, p2);
}

double Rectangle::Pair::getDobytok() const
{
	return  p1 * p2;
}

