#include "RAM.h"

RAM::RAM() : size(0), model(nullptr)
{
}

RAM::RAM(double size, string model) : size(size), model(model)
{
}

void RAM::GetM()
{
	cout << "RAM size: " << size << ", " << "model: " << model;
}
