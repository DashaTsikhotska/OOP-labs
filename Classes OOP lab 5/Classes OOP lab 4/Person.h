#pragma once
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Person
{
protected:
	string phone;
	string email;
	int age;
	int money;
public:
	string name;
	string surname;
	string gender;

	string getFullName();
	void setPhone(string);
	void setEmail(string);
	void setAge(int);
	void setMoney(int);
	string getPhone();
	string getEmail();
	int getAge();
	int getMoney();
	Person(string, string);

	Person();
	virtual void func() = 0;
	//Віртуальний деструктор
	virtual ~Person();
};
