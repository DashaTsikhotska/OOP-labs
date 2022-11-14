#pragma once

#include "Catalog.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;
class Catalog;
class Hairstyle
{
public:
	string description;
	int cost;
private:
	Catalog* catalog;
public:
	Hairstyle(string, Catalog*, int);
	Hairstyle();
	~Hairstyle();
};