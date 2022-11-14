#pragma once

#include "Person.h"
#include "Record.h"
#include <string>
#include <iostream>
#include <fstream>

class Record;
//task 9: Закритий спосіб наслідування 
class Manager : protected virtual Person
{
public:
	Manager(string, string);
	Manager();
	void display();

	//Перевизначити деструктор для кращої роботи(поліморфізм)
	void func()override;
	~Manager()override;

	//task 3: Зв'язки між класами
	Record* createRecord(Client*, Hairdresser*, Hairstyle*, string);
	void printToFile();
	void readFromFile();
	//Конструктор копіювання
	Manager(const Manager& p);
};