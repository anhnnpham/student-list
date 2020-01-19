#include "mainClass.cpp"
#include "mainFunction.cpp"

int main()
{
    int numStud;

    // get number of students
    cout << "How many students?" << "\n";
    cin >> numStud;
    student students[numStud];
    
    getStudentList(students, numStud);
    int sel = sortSelection(students, numStud);
    printInfo(students, numStud, sel);
    
    return 0;
}

    