#include "UniMaster.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

UniMaster::UniMaster(string name, string surname, string certifi, int exp, int mone, string gende, int ag) :
	name_U(name), surname_U(surname), MakeUpArtist(gende, ag), NailMaster(certifi, exp, mone) {}

void UniMaster::display() {
	cout << "Name:" << name_U << endl;
	cout << "Surname:" << name_U << endl;
	cout << "Age :" << MakeUpArtist::age << endl;
	cout << "Gender :" << MakeUpArtist::gender << endl;
	cout << "Certificate :" << getCertifi() << endl;
	cout << "Experience :" << getExp() << endl;
	cout << "Salary :" << NailMaster::money << endl;
	cout << "\n\n\n";

}
UniMaster::~UniMaster() {
	cout << "UniMaster is destroyed" << endl;
}

void UniMaster::func()
{
	cout << "Universal master can do both: nail designs and makeups." << endl;
}
UniMaster::UniMaster(){}