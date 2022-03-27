#include<iostream>
#include "Rectangle.h"
using namespace std;
int main()
{
	Rectangle s;
	s.Read();
	s.Display();
	cout << "Square = " << s.getSquare() << endl;
	cout << "Perimeter = " << s.getPerimeter() << endl;
	return 0;
}

