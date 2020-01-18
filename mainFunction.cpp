// #include "main.hpp"
void compareName(studList studentIn[], int numStud);
void compareID(studList studentIn[], int numStud);
void compareGraduationYear(studList studentIn[], int numStud);

void compareName(studList studentIn[], int numStud)
{
    for (size_t j = 0; j < numStud; j++)
    {
        for (size_t i = 0; i < numStud-1; i++)
        {
            if ( (studentIn[i].getName().compare(studentIn[i+1].getName()) ) > 0)
            {
                studList *ptr = &studentIn[i+1];
                &studentIn[i+1] = &studentIn[i];
                studentIn[i] = ptr;
            }
        }
    }
    // get info
    for (size_t i = 0; i < numStud; i++)
    {
        studentIn[i].print();
    }
}

void compareID(studList studentIn[], int numStud)
{
    for (size_t j = 0; j < numStud; j++)
    {
        for (size_t i = 0; i < numStud-1; i++)
        {
            if ( studentIn[i].getID > studentIn[i+1].getID )
            {
                studList *ptr = &studentIn[i+1];
                &studentIn[i+1] = &studentIn[i];
                studentIn[i] = ptr;
            }
        }
    }
    // get info
    for (size_t i = 0; i < numStud; i++)
    {
        studentIn[i].print();
    }
}

void compareGraduationYear(studList studentIn[], int numStud)
{
    for (size_t j = 0; j < numStud; j++)
    {
        for (size_t i = 0; i < numStud-1; i++)
        {
            if ( studentIn[i].getGradYear > studentIn[i+1].getGradYear )
            {
                studList *ptr = &studentIn[i+1];
                &studentIn[i+1] = &studentIn[i];
                studentIn[i] = ptr;
            }
        }
    }
    // get info
    for (size_t i = 0; i < numStud; i++)
    {
        studentIn[i].print();
    }
}