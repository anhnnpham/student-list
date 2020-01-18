#include "mainClass.cpp"
#include "mainFunction.cpp"

int main()
{
    int numStud, id, gradYear;
    string name;
    
    // get number of students
    cout << "How many students?" << "\n";
    cin >> numStud;
    studList students[numStud];
    
    // set info
    for (size_t i = 0; i < numStud; i++)
    {
        cin.clear(); 
        cin.ignore(); 
        cout << "\nName of student " << i+1 << ": ";
        getline(cin, name);
        students[i].setName(name);

        cout << "\nID of student " << i+1 << ": ";
        cin >> id;
        students[i].setID(id);

        cout << "\nGraduation year of student " << i+1 << ": ";
        cin >> gradYear;
        students[i].setGradYear(gradYear);
    }
    
    // output students in ascending order
    compareName(students, numStud);
    compareID(students, numStud);
    compareGraduationYear(students, numStud);
    return 0;
}

    