#pragma once

#include "Hairdresser.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

void Hairdresser::setCertificates(string certificates) { this->certificates = certificates; }
void Hairdresser::setExperience(int experience) { this->experience = experience; }
void Hairdresser::setLanguages(string languages) { this->languages = languages; }

string Hairdresser::getCertificates() { return this->certificates; }
int Hairdresser::getExperience() { return this->experience; }
string Hairdresser::getLanguages() { return this->languages; }

Hairdresser::~Hairdresser()
{
    cout << "Hairdresser " << getFullName() << "has been destructed" << endl;
}
;
Hairdresser::Hairdresser() {
    this->name = "Angelina";
    this->surname = "Poluhovich";
    this->age = 19;
    this->gender = "F";
    this->phone = "424242";
    this->languages = "spain";
    this->certificates = "fdf";
    this->experience = 3;
    this->email = "random@gmail.com";
}
Hairdresser::Hairdresser(string name, string surname, Catalog* catalog) : Person(name, surname) { this->setCertificates("Certificates"); this->setExperience(10); this->setLanguages("Languages"); ; this->setJobTime("11:00 - 18:00"); this->catalog = catalog; };
Hairdresser::Hairdresser(string name, string surname) : Person(name, surname) { this->setCertificates("Certificates"); this->setExperience(10); this->setLanguages("Languages"); ; this->setJobTime("11:00 - 18:00");};

void Hairdresser::printToFile() {
    ofstream out("hairdresser.txt", ios::out);
    out << this->name << endl;
    out << this->surname << endl;
    out << this->getAge() << endl;
    out << this->gender << endl;
    out << this->getPhone() << endl;
    out << this->languages << endl;
    out << this->certificates << endl;
    out << this->experience << endl;
    out << this->getEmail() << endl;


    out.close();
}

void Hairdresser::readFromFile() {
    ifstream file_out;
    file_out.exceptions(ifstream::badbit | ifstream::failbit);
    string path = "hairdresser.txt";
    try {
        cout << "\nTry to open File" << endl;
        file_out.open(path);
        cout << "File succesfuly open!\n" << endl;
        file_out >> this->name;
        file_out >> this->surname;
        file_out >> this->age;
        file_out >> this->gender;
        file_out >> this->phone;
        file_out >> this->languages;
        file_out >> this->certificates;
        file_out >> this->experience;
        file_out >> this->email;

    }


    catch (const std::exception& ex) {
        cout << ex.what() << endl;
        cout << "Error with openning file! " << endl;
    }

    file_out.close();
}

void Hairdresser::func() {
    cout << "The hairdresser makes a hairstyle depending on the client's choice." << endl;
}
void Hairdresser::setJobTime(string time) { this->jobTime = time; }
string Hairdresser::getJobTime() { return this->jobTime; }
void Hairdresser::display() {
    cout << this->name << endl;
    cout << this->surname << endl;
    cout << this->getAge() << endl;
    cout << this->gender << endl;
    cout << this->getPhone() << endl;
    cout << this->languages << endl;
    cout << this->certificates << endl;
    cout << this->experience << endl;
    cout << this->getEmail() << endl;
    cout << this->getJobTime() << endl;
}