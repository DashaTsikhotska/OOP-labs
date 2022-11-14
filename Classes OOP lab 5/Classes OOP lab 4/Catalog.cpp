#pragma once

#include "Catalog.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

Catalog::Catalog(string name) { this->name = name; }
Catalog::Catalog() :Catalog("Name") {}

Catalog::~Catalog()
{
	for (Hairstyle* hs : hairstyleList)
	{
		delete hs;
	}
	cout << "Catalog " << name << " has been destructed" << endl;
}

vector<Hairstyle*> Catalog::getHairstylelist()
{
	return this->hairstyleList;
}

void Catalog::addHairstyle(Hairstyle* hs)
{
	this->hairstyleList.push_back(hs);
}
