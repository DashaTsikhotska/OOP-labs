#pragma once

#include "Record.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

Record::Record(Client* client, Hairdresser* hairdresser, Hairstyle* hairstyle, Manager* manager, string datetime) { this->client = client; this->hairdresser = hairdresser; this->hairstyle = hairstyle; this->manager = manager; this->datetime = datetime; }
Record::Record() : Record(NULL, NULL, NULL, NULL, "00:00") {}

Record::~Record()
{
	cout << "Record has been destructed" << endl;
}
