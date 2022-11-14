#pragma once

#include "MakeUpArtist.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

MakeUpArtist::MakeUpArtist(string gende, int ag) {
	gender = gende;
	age = ag;

}
MakeUpArtist::~MakeUpArtist()
{
	cout << "Makeup artist is destroyed" << endl;
}
void MakeUpArtist::func() {
	cout << "The makeup artist makes different makeups for various events." << endl;
}
MakeUpArtist::MakeUpArtist(){}