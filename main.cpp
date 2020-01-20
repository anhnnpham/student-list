#include "mainClass.cpp"
#include "mainFunction.cpp"

int main()
{
    // get number of students
    int numStud;
    cout << "How many students?" << "\n";
    cin >> numStud;
    cin.clear();
    cin.ignore();

    student students[numStud];
    
    // set info
    int id, gradYear;
    string name;
    for (size_t i = 0; i < numStud; i++)
    {
        cout << "\nName of student " << i+1 << ": ";
        getline(cin, name);
        students[i].setName(name);

        cout << "\nID of student " << i+1 << ": ";
        cin >> id;
        students[i].setID(id);
        cin.clear();
        cin.ignore();

        cout << "\nGraduation year of student " << i+1 << ": ";
        cin >> gradYear;
        cin.clear();
        cin.ignore();
        students[i].setGradYear(gradYear);
    }
    
    int selection = sortSelection(students, numStud);
    printInfo(students, numStud, selection);
    return 0;
}

    