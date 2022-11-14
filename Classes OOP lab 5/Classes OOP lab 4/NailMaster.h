#pragma once
#include <string>
#include <iostream>
#include <fstream>

#include "Person.h"

class NailMaster : public virtual Person
{
private:
	string certificate;
	int experience;
public:
	string getCertifi() { return certificate; }
	int getExp() { return experience; }

	NailMaster();
	NailMaster(string certifi, int exp, int mone);

	~NailMaster()override;
	void func()override;
};