#pragma once

#include "Client.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;
//task 18 (static element)
int Client::countClients = 0;
string Client::getHaircolor() { return this->haircolor; }
string Client::getHairlength() { return this->hairlength; }
void Client::setHaircolor(string haircolor) { this->haircolor = haircolor; }
void Client::setHairlength(string hairlength) { this->hairlength = hairlength; }

Client::Client() {
    name = "Dasha"; surname = "Tsikhotska"; age = 19; gender = "F"; phone = "641037310"; haircolor = "Pink"; hairlength = "medium"; email = "tsik.da@gmail.com";
};
Client::Client(string name, string surname) : Person(name, surname) { this->countClients++;  this->setHaircolor("Color"); this->setHairlength("Length"); };

void Client::printToFile() {
    ofstream out("client.txt", ios::out);
    out << this->name << endl;
    out << this->surname << endl;
    out << this->getAge() << endl;
    out << this->gender << endl;
    out << this->getPhone() << endl;
    out << this->getHaircolor() << endl;
    out << this->getHairlength() << endl;
    out << this->getEmail() << endl;


    out.close();
}

void Client::readFromFile() {
    ifstream file_out;
    file_out.exceptions(ifstream::badbit | ifstream::failbit);
    string path = "client.txt";
    try {
        cout << "\nTry to open File" << endl;
        file_out.open(path);
        cout << "File succesfuly open!\n" << endl;
        file_out >> this->name;
        file_out >> this->surname;
        file_out >> this->age;
        file_out >> this->gender;
        file_out >> this->phone;
        file_out >> this->haircolor;
        file_out >> this->haircolor;
        file_out >> this->hairlength;
        file_out >> this->email;

    }
    catch (const std::exception& ex) {
       /* cout << ex.what() << endl;
        cout << "Error with openning file! " << endl;*/
    }
    file_out.close();
}

Client::~Client()
{
    cout << "Client " << getFullName() << " has been destructed" << endl;
}

void Client::func() {
    cout << "The client makes an order and gets a haircut and other services from salon workers." << endl;
}