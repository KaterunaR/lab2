#pragma once
#include <string>
using namespace std;

class FILES {

    string name;
    int size;
    string data;
    string time;
    string atributs;

public:
    FILES(const string& name, int size, const string& date, const string& time, const string& atributs);

    string getName() const;
    void setName(const string& name);

    int getSize() const;
    void setSize(int size);

    string getData() const;
    void setData(const string& data);

    string getTime() const;
    void setTime(const string&time);

    string getAtributs() const;
    void setAtributs(const string& atributs);

    void show() const;
};
