#include "File.h"
#include <iostream>
using namespace std;

FILES::FILES(const string& name, int size, const string& date, const string& time, const string& atributs):
    name(name), size(size), data(data), time(time), atributs(atributs) {};

string FILES::getName() const {
    return name;
}

void FILES::setName(const string& name) {
    this->name = name;
}

string FILES::getData() const {
    return data;
}

void FILES::setData(const string& data) {
    this->data = data;
}

string FILES::getTime() const {
    return time;
}

void FILES::setTime(const string& time) {
    this->time = time;
}

string FILES::getAtributs() const {
    return atributs;
}

void FILES::setAtributs(const string& atributs) {
    this->atributs = atributs;
}

int FILES::getSize() const {
    return size;
}

void FILES::setSize(int size) {
    this->size = size;
}

void FILES::show() const {
    cout << "Name: " << name << ", Size: " << size << ", Date: " << data << ", Time: "<<time<<", Atributs: "<<atributs<<"."<< endl;
}