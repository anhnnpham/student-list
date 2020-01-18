#pragma once

#ifndef CLASS_HPP
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class studList;

void compareName(studList studentIn[], int numStud);
void compareID(studList studentIn[], int numStud);
void compareGraduationYear(studList studentIn[], int numStud);

#endif // CLASS_HPP