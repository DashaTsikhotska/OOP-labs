#pragma once

#include "Person.h"
#include"Catalog.h"
#include <string>
#include <iostream>
#include <fstream>


class Catalog;
class Hairdresser : public virtual Person
{
	//надання доступу для FriendClass
	friend class FriendClass;
protected:
	string languages;
	string certificates;
	int experience;
	Catalog* catalog;
	string jobTime;

public:
	template <typename T> T getSquare(T data) {//////////////////////////////////////////
		return data * data;
	}
	Hairdresser& operator++() {
		++experience;
		return *this;
	}
	Hairdresser& operator--(int) {

		Hairdresser obj = *this;
		--experience;
		return obj;
	}
	Hairdresser operator + (Hairdresser& obj) {
		Hairdresser tmp;
		tmp.experience = experience + obj.experience;
		return (tmp);
	}

	Hairdresser operator - (Hairdresser& obj) {
		Hairdresser tmp;
		tmp.experience = experience - obj.experience;
		return (tmp);
	}
	Hairdresser operator * (Hairdresser& obj) {
		Hairdresser tmp;
		tmp.experience = experience * obj.experience;
		return tmp;
	}
	Hairdresser& operator = (Hairdresser obj) {
		experience = obj.experience;
		return *this;
	}
	Hairdresser& operator += (Hairdresser obj) {
		experience += obj.experience;
		return *this;
	}
	Hairdresser& operator -= (Hairdresser obj) {
		experience -= obj.experience;
		return *this;
	}
	Hairdresser& operator *= (Hairdresser obj) {
		experience *= obj.experience;
		return *this;
	}
	/////////////////////////////////


	void setLanguages(string);
	void setCertificates(string);
	void setExperience(int);
	//void setJob(Job*);
	string getLanguages();
	string getCertificates();
	int getExperience();
	//Job* getJob();
	void printToFile();
	void readFromFile();
	Hairdresser(string, string);
	Hairdresser(string, string, Catalog*);
	Hairdresser();
	void setJobTime(string time);
	string getJobTime();
	void display();
	void func()override;
	~Hairdresser()override;
};