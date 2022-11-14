#pragma once
#include "Person.h"
#include <string>
#include <iostream>
#include <fstream>

class Client : public virtual Person
{

private:
	string haircolor;
	string hairlength;
protected:
	void setHaircolor(string);
	void setHairlength(string);
	string getHaircolor();

	string getHairlength();
public:
	Client(string, string);
	Client();
	void printToFile();
	void readFromFile();
	~Client()override;
	//task 18
	static int countClients;

	void func()override;
};