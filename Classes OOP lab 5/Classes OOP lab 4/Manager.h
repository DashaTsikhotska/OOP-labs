#pragma once

#include "Person.h"
#include "Record.h"
#include <string>
#include <iostream>
#include <fstream>

class Record;
//task 9: �������� ����� ����������� 
class Manager : protected virtual Person
{
public:
	Manager(string, string);
	Manager();
	void display();

	//������������� ���������� ��� ����� ������(����������)
	void func()override;
	~Manager()override;

	//task 3: ��'���� �� �������
	Record* createRecord(Client*, Hairdresser*, Hairstyle*, string);
	void printToFile();
	void readFromFile();
	//����������� ���������
	Manager(const Manager& p);
};