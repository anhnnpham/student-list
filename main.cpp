// string student1[3] = {"Joe Lime", "15", "2019"};
// string student2[3] = {"Bob Green", "3", "2020"};
// string student3[3] = {"SallyAnne Green", "1", "2017"};
// string student4[3] = {"Annie Blue", "10", "2020"};
// string student5[3] = {"Jose Lemon", "25", "2016"};
#include "mainClass.cpp"

void compareName(studList students[], int numStud);

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
        cout << "\nName of student " << i << ": ";
        getline(cin, name);
        students[i].setName(name);

        cout << "\nID of student " << i << ": ";
        cin >> id;
        students[i].setId(id);

        cout << "\nGraduation year of student " << i << ": ";
        cin >> gradYear;
        students[i].setGradYear(gradYear);
    }
    
    // output students in ascending order
    compareName(students, numStud);
    
    // get info
    for (size_t i = 0; i < numStud; i++)
    {
        students[i].print();
    }
    
    return 0;
}
void compareName(studList students[], int numStud)
{
    for (size_t j = 0; j < numStud; j++)
    {
        for (size_t i = 0; i < numStud-1; i++)
        {
            if (students[i].getName().compare(students[i+1].getName()) > 0)
            {
                // studList students[numStud];
                studList* ptr = &students[i+1];
                &students[i+1] = &students[i];
                &students[i] = ptr;
            }
        }
    }
    return;
}

/*     string* collection[2] = {&student1[0], &student2[0]}; 
    for (int i = 0; i < 2; i++)
        for (int index = 0; index < 1; index++)
            // dereference
            if (collection[index][0].compare(collection[index + 1][0]) > 0)
                string *swap = collection[index + 1];
                collection[index + 1] = collection[index];
                collection[index] = swap;

    for (int index = 0; index < 5; index++)
        for (int i = 0; i < 3; i++)
            cout << collection[index][i];
 */
