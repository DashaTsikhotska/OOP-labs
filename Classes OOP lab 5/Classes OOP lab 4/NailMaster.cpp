#include "NailMaster.h"
#include <string>
#include <iostream>
#include <fstream>

NailMaster::NailMaster(string certifi, int exp, int mone) {
	certificate = certifi;
	experience = exp;
	money = mone;
}
NailMaster::~NailMaster() {
	cout << "Nail master is destroyed" << endl;
}
void NailMaster::func(){
	cout << "The nail master makes a nail design." << endl;
}
NailMaster::NailMaster(){}
