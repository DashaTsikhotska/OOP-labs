#pragma once

#include "Manager.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

//task 5: Конструктор зі списками ініціалізації
Manager::Manager():Manager(name, surname) {}
Manager::~Manager()
{
    cout << "Manager " << getFullName() << " has been destructed" << endl;
};
Manager::Manager(string name, string surname) : Person(name, surname) { };

Record* Manager::createRecord(Client* client, Hairdresser* hairdresser, Hairstyle* hairstyle, string datetime)
{
    Record* record = new Record(client, hairdresser, hairstyle, this, datetime);

    cout << "Client " << client->getFullName() <<
        " has been recorded by manager " << this->getFullName() << " to get " + hairstyle->description << " from " << hairdresser->getFullName() <<
        " at " << datetime << endl;
    cout << endl;

    return record;
}
void Manager::printToFile() {
    ofstream out("manager.txt", ios::out);
    out << this->name << endl;
    out << this->surname << endl;
    out << this->getAge() << endl;
    out << this->gender << endl;
    out << this->getPhone() << endl;
    out << this->getEmail() << endl;


    out.close();
}

void Manager::readFromFile() {
    ifstream file_out;
    file_out.exceptions(ifstream::badbit | ifstream::failbit);
    string path = "manager.txt";
    try {
        cout << "\nTry to open File" << endl;
        file_out.open(path);
        cout << "File succesfuly open!\n" << endl;
        file_out >> this->name;
        file_out >> this->surname;
        file_out >> this->age;
        file_out >> this->gender;
        file_out >> this->phone;
        file_out >> this->email;

    }
    catch (const std::exception& ex) {
        cout << ex.what() << endl;
        cout << "Error with openning file! " << endl;
    }

    file_out.close();
}

//конструктор копіювання
Manager::Manager(const Manager& p): Manager(p.name, p.surname) {
}

//Перевизначення функції
void Manager::func() {
    cout << "The manager organizes schedules of salon workers and makes appointments for the clients." << endl;
}
void Manager::display() {
    cout << this->name << endl;
    cout << this->surname << endl;
}
