#pragma once
#include <iostream>
using namespace std;
class Keyboard
{
	double size;
	string model;
public:
	Keyboard();
	Keyboard(double s, string m);
	void GetK() const;
};

