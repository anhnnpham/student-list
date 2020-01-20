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
int sortSelection(student* students, int numStud);
void printInfo(student* studInput, int numStud, int selection);
void printAscending(student* studInput, int numStud);
void printDescending(student* studInput, int numStud);

#endif // CLASS_HPP