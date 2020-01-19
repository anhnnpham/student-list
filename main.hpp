#pragma once

#ifndef CLASS_HPP
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <utility> // std::swap( , )

using namespace std;

class student;

void sortName(student* studInput, int numStud);
void sortID(student* studInput, int numStud);
void sortGradYear(student* studInput, int numStud);
void listAscending(student* studInput, int numStud);
void listDescending(student* studInput, int numStud);
int sortSelection(student* students, int numStud);
void getStudentList(student* students, int numStud);
void printInfo(student* studInput, int numStud, int sel);

#endif // CLASS_HPP