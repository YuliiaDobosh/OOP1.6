#pragma once
#include <string >
#include <sstream>

class Rectangle
{ public:
	class Pair
	{
	private:
		double p1, p2;

	public:
		double getp1() const { return p1; }
		double getp2() const { return p2; }
		std::string toString() const;

		void setp1(double p1) { this->p1 = p1; }
		void setp2(double p2) { this->p2 = p2; }

		void Init(double p1, double p2);
		void Display() const;
		void Read();

		double getDobytok()const;
	};
private: 
	Pair pair;
public:
	Rectangle::Pair getPair() const { return pair; }
	std::string toString() const;
	double getSquare()const { return pair.getDobytok(); }
	double getPerimeter()const { return  2 * (pair.getp1() + pair.getp2()); }
	bool setp1(double p1);
	bool setp2(double p2);
	void Init(double p1, double p2);
	void Display() const;
	void Read();
	void Init(Rectangle::Pair p) { pair = p; }

};

