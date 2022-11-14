#pragma once

#include "Hairstyle.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

Hairstyle::Hairstyle(string description, Catalog* catalog, int cost) { this->description = description; this->catalog = catalog; this->cost = cost; }
Hairstyle::Hairstyle():Hairstyle("Description", NULL, 100) {}

Hairstyle::~Hairstyle()
{
	cout << "Hairstyle " << description << " has been destructed" << endl;
}
