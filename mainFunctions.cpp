int sortSelection(student* studInput, int numStud)
{   // user chooses the order
    int selection;
    cout << "\nIn what order do you want to sort the list?\n";
    cout << "(1) by name, ascending\n";
    cout << "(2) by name, descending\n";
    cout << "(3) by ID, ascending\n";
    cout << "(4) by ID, descending\n";
    cout << "(5) by graduation year, ascending\n";
    cout << "(6) by graduation year, descending\n";
    cout << "\n" << "Name" << "\t\t" << "ID" << "\t\t" << "Year"; 

    cin >> selection;
    return selection;
}

void sortName(student* studInput, int numStud)
{   // bubble sort
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
                // you can also swap by reference (&) if the object is not an array
            }
        }
    }
}

void sortID(student* studInput, int numStud)
{   // bubble sort
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
{   // bubble sort
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

void printAscending(student* studInput, int numStud)
{   // print in an ascending order
    for (size_t j = 0; j < numStud; j++)
    {
        studInput[j].print();
    }
}

void printDescending(student* studInput, int numStud)
{   // print in an descending order
    for (int j = numStud - 1; j >= 0; --j) // size_t = wrong
    {
        studInput[j].print();
    }
}

void printInfo(student* studInput, int numStud, int selection)
{   // print the list according to user's selection
    switch (selection)
    {
    case 1:
        sortName(studInput, numStud);
        printAscending(studInput, numStud);
        break;
    case 3:
        sortID(studInput, numStud);
        printAscending(studInput, numStud);
        break;
    case 5:
        sortGradYear(studInput, numStud);
        printAscending(studInput, numStud);
        break;
    case 2:
        sortName(studInput, numStud);
        printDescending(studInput, numStud);
        break;
    case 4:
        sortID(studInput, numStud);
        printDescending(studInput, numStud);
        break;
    case 6:
        sortGradYear(studInput, numStud);
        printDescending(studInput, numStud);
        break;
    }
}