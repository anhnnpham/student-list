#include "main.hpp"
class student
{
private:
    string _name;
    int _idNum;
    int _gradYear;

public:
    void setName(string nameIn);
    void setID(int idIn);
    void setGradYear(int gradYearIn);
    void print();
    string getName();
    int getID();
    int getGradYear();
};

void student::setName(string nameIn)
{
    _name = nameIn;
}

void student::setID(int idIn)
{
    _idNum = idIn;
}

void student::setGradYear(int gradYearIn)
{
    _gradYear = gradYearIn;
}

void student::print()
{
    cout << "\n" << _name << "\t\t#" << _idNum << "\t\t" << _gradYear;
}

string student::getName()
{
    return _name;
}

int student::getID()
{
    return _idNum;
}

int student::getGradYear()
{
    return _gradYear;
}
