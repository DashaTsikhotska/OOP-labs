#pragma once

#include "Person.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int Person::getAge() { return this->age; }
int Person::getMoney() { return this->money; }
string Person::getPhone() { return this->phone; }
string Person::getEmail() { return this->email; }
void Person::setAge(int age) { this->age = age; }
void Person::setEmail(string email) { this->email = email; }
void Person::setPhone(string phone) { this->phone = phone; }
void Person::setMoney(int money) { this->money = money; }
string Person::getFullName() { return this->name + " " + this->surname; }

Person::Person():Person("Name", "Surname"){}

Person::Person(string name, string surname) {
	this->name = name; this->surname = surname; this->gender = "F";
	setAge(18); setEmail("email@gmail.com"); setPhone("380(67)123-45-67"); setMoney(0);
}

//Віртуальна функція 
void Person::func(){}
Person::~Person(){}