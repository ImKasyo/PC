#include "Keyboard.h"

Keyboard::Keyboard() : size(0), model(nullptr)
{
}

Keyboard::Keyboard(double s, string m) : size(s), model(m)
{
}

void Keyboard::GetK() const
{
	cout << "Keyboard size: " << size << ", " << "model: " << model;
}
