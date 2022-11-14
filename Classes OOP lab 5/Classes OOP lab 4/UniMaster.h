#pragma once
#include <string>
#include <iostream>
#include <fstream>

#include "MakeUpArtist.h"
#include "NailMaster.h"
class UniMaster : public MakeUpArtist, public NailMaster
{
private:
	string name_U;
	string surname_U;

public:

	UniMaster(string name, string surname, string certifi, int exp, int mone, string gende, int ag);
	UniMaster();

	void display();
	~UniMaster()override;
	void func()override;

};