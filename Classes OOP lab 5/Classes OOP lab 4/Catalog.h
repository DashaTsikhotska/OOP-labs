#pragma once

#include "Hairstyle.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Hairstyle;
class Catalog
{
public:
	string name;
	Catalog(string);
	Catalog();
	~Catalog();
	vector<Hairstyle*> getHairstylelist();
	void addHairstyle(Hairstyle*);
private:
	vector<Hairstyle*> hairstyleList;
};