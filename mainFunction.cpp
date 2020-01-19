void getStudentList(student* studInput, int numStud)
{    // set info
    int id, gradYear;
    string name;

    for (size_t i = 0; i < numStud; i++)
    {
        cin.clear();
        cin.ignore();
        cout << "\nName of student " << i+1 << ": ";
        getline(cin, name);
        studInput[i].setName(name);

        cout << "\nID of student " << i+1 << ": ";
        cin >> id;
        studInput[i].setID(id);
        cin.clear();
        cin.ignore();

        cout << "\nGraduation year of student " << i+1 << ": ";
        cin >> gradYear;
        studInput[i].setGradYear(gradYear);
    }
}

int sortSelection(student* studInput, int numStud)
{
    int sel;
    cout << "\nSort in what order?\n";
    cout << "(1) by name, ascending\n";
    cout << "(2) by name, descending\n";
    cout << "(3) by ID, ascending\n";
    cout << "(4) by ID, descending\n";
    cout << "(5) by graduation year, ascending\n";
    cout << "(6) by graduation year, descending\n";
    
    cout << "\n" << "Name" << "\t\t" << "ID" << "\t\t" << "Year"; 
    
    cin.clear();
    cin.ignore();
    cin >> sel;
    return sel;
}

void printInfo(student* studInput, int numStud, int sel)
{
    switch (sel)
    {
    case 1:
        sortName(studInput, numStud);
        listAscending(studInput, numStud);
        break;
    case 3:
        sortID(studInput, numStud);
        listAscending(studInput, numStud);
        break;
    case 5:
        sortGradYear(studInput, numStud);
        listAscending(studInput, numStud);
        break;
    case 2:
        sortName(studInput, numStud);
        listDescending(studInput, numStud);
        break;
    case 4:
        sortID(studInput, numStud);
        listDescending(studInput, numStud);
        break;
    case 6:
        sortGradYear(studInput, numStud);
        listDescending(studInput, numStud);
        break;
    default:
        break;
    }
}

void sortName(student* studInput, int numStud)
{
    for (size_t times = 0; times < numStud; times++)
    {
        for (size_t j = 0; j < numStud - 1; j++)
        {
            if ((studInput[j].getName().compare(studInput[j+1].getName())) > 0)
            {
                // student temp = studInput[j];
                // studInput[j] = studInput[j+1];
                // studInput[j+1] = temp;
                std::swap(studInput[j], studInput[j+1]);
            }
        }
    }
}

void sortID(student* studInput, int numStud)
{
    for (size_t times = 0; times < numStud; times++)
    {
        for (size_t j = 0; j < numStud - 1; j++)
        {
            if (studInput[j].getID() > studInput[j+1].getID() > 0)
            {
                std::swap(studInput[j], studInput[j + 1]);
            }
        }
    }
}

void sortGradYear(student* studInput, int numStud)
{
    for (size_t times = 0; times < numStud; times++)
    {
        for (size_t j = 0; j < numStud - 1; j++)
        {
            if (studInput[j].getGradYear() > studInput[j+1].getGradYear() > 0)
            {
                std::swap(studInput[j], studInput[j + 1]);
            }
        }
    }
}

void listAscending(student* studInput, int numStud)
{
    for (size_t j = 0; j < numStud; j++)
    {
        studInput[j].print();
    }
}

void listDescending(student* studInput, int numStud)
{
    for (int j = numStud - 1; j >= 0; --j) // size_t = wrong
    {
        studInput[j].print();
    }
}