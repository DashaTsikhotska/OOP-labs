#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include "Person.h"
#include "Job.h"
class MakeUpArtist :public virtual Person
{
private:

public:

	MakeUpArtist(string gende, int ag);
	MakeUpArtist();

	~MakeUpArtist()override;
	void func()override;
};