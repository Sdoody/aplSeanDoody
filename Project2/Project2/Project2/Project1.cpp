// Project2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"project2.h"

using namespace std;

Rectangle::Rectangle(int a, int b) {
	width = a;
	height = b;
}

int main() {
	Rectangle rect(3, 4);
	Rectangle rectb(5, 6);
	cout << "rect area: " << rect.area() << endl;
	cout << "rectb area: " << rectb.area() << endl;

	system("pause");
	return 0;
}

