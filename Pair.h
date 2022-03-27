#pragma once
#include <string>
using namespace  std;

class Pair
{
private:
	double p1, p2;

public:
	double getp1() const { return p1; }
	double getp2() const { return p2; }
	string toString() const;

	void setp1(double p1) { this->p1 = p1; }
	void setp2(double p2) { this->p2 = p2; }

	void Init(double p1, double p2);
	void Display() const;
	void Read();

	double getDobytok()const;
}
;
