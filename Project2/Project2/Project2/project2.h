#include"stdafx.h"
#include<iostream>
using namespace std; 


// declartion of class Rectangle
class Rectangle {
	int width, height;
public:
	Rectangle(int, int);
	int area() { return (width*height); }
};
