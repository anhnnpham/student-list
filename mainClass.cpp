#include "main.hpp"
class studList
{
private:
    string name_;
    int idNum_;
    int gradYear_;

public:
    void setName(string nameIn);
    void setID(int idIn);
    void setGradYear(int gradYearIn);
    void print();
    string getName();
    int getID();
    int getGradYear();
};

void studList::setName(string nameIn)
{
    name_ = nameIn;
}

void studList::setID(int idIn)
{
    idNum_ = idIn;
}

void studList::setGradYear(int gradYearIn)
{
    gradYear_ = gradYearIn;
}

void studList::print()
{
    cout << "\n" << name_ << "\t\t" << idNum_ << "\t\t" << gradYear_;
}

string studList::getName()
{
    return name_;
}

int studList::getID()
{
    return idNum_;
}

int studList::getGradYear()
{
    return gradYear_;
}
