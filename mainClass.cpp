#include "main.hpp"
class studList
{
private:
    string name_;
    int idNum_;
    int gradYear_;

public:
    void setName(string nameIn);
    void setId(int idIn);
    void setGradYear(int gradYearIn);
    void print();
    string getName();
    int getId();
    int getGradYear();
    
};
void studList::setName(string nameIn)
{
    name_ = nameIn;
}
void studList::setId(int idIn)
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
int studList::getId()
{
    return idNum_;
}
int studList::getGradYear()
{
    return gradYear_;
}

// string student1[3] = {"Joe Lime", "15", "2019"};
// string student2[3] = {"Bob Green", "3", "2020"};
// string student3[3] = {"SallyAnne Green", "1", "2017"};
// string student4[3] = {"Annie Blue", "10", "2020"};
// string student5[3] = {"Jose Lemon", "25", "2016"};