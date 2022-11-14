#pragma once

#include "Client.h"
#include "Hairdresser.h"
#include "Hairstyle.h"
#include "Manager.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

class Client;
class Hairdresser;
class Hairstyle;
class Manager;
class Record
{
public:
	string datetime;
	Record();
	~Record();
	//Àñîö³àö³ÿ 
	Record(Client*, Hairdresser*, Hairstyle*, Manager*, string);
private:
	Client* client;
	Hairdresser* hairdresser;
	Hairstyle* hairstyle;
	Manager* manager;

};