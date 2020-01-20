#include "mainClasses.cpp"
#include "mainFunctions.cpp"

int main()
{
    // get number of students
    int numStud;
    cout << "How many students?" << "\n";
    cin >> numStud;
    cin.clear();
    cin.ignore();
    
    // array of objects
    student students[numStud];
    
    // set info
    int id, gradYear;
    string name;
    for (size_t i = 0; i < numStud; i++)
    {
        // set name
        cout << "\nName of student " << i+1 << ": ";
        getline(cin, name);
        students[i].setName(name);

        // set ID
        cout << "\nID of student " << i+1 << ": ";
        cin >> id;
        students[i].setID(id);
        cin.clear();
        cin.ignore();

        // set graduation year
        cout << "\nGraduation year of student " << i+1 << ": ";
        cin >> gradYear;
        cin.clear();
        cin.ignore();
        students[i].setGradYear(gradYear);
    }
    
    // user chooses in what order the list deplays
    int selection = sortSelection(students, numStud);
    // print out to list
    printInfo(students, numStud, selection);
    return 0;
}

    