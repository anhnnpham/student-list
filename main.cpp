/* Goal: sort students by multiple data vaule
**
**student1: Name: Joe Lime, ID#15, Grad. Date: 2019
**student2: Name: Bob Green, ID#3, Grad. Date: 2020
**student3: Name: SallyAnne Green , ID#1, Grad. Date: 2017
**student4: Name: Annie Blue, ID#10, Grad. Date: 2020
**student5: Name: Jose Lemon, ID#25, Grad. Date: 2016
You will need to sort the students by name, then sort them by number,
and finally sort them by graduation date.
After each sort print out all the information on each of the students.
 
Concatenate data on each student into a string. Then sort based on those strings. 
This would be a beast to do. You would have to keep track of which parts of the string 
need to be converted back to integers, otherwise you will be sorting numbers 
alphabetically. Also, the names are of different lengths, so you would have to add some 
kind of string delimiter to separate the fields.

Maybe create some kind of array of pointers. This would be a total misuse of pointers and 
would not be recommended as good programming.... but it might work.

You could learn to use tuples. We haven't gotten to that yet, but you might be able to 
write something that might not be too, too horrible.
*/
// #include "main.hpp"
// in main.hpp
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //ToDo sort the students by name, then by number, then by gradDate
    const int 3 = 3;
    
    string student1[3] = {"Joe Lime", "15", "2019"};
    string student2[3] = {"Bob Green", "3", "2020"};

	// string student1[size][chtr] = {"Joe Lime", "15", "2019"};
	// string student2[size][chtr] = {"Bob Green", "3", "2020"};
	// string student3[size][chtr] = {"SallyAnne Green", "1", "2017"};
	// string student4[size][chtr] = {"Annie Blue", "10", "2020"};
	// string student5[size][chtr] = {"Jose Lemon", "25", "2016"};

	// array of pointers = bad practice!
    // if [3] --> segmentation error. &student1 is for 1D string
    string* collection[2] = {&student1[0], &student2[0]}; 
    
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