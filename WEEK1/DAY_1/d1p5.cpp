#include <iostream>
using namespace std;
#include <string>
#include <cstring> //contains functions to handle character array strings

// arrays
// strings are arrays of characters
#define AGE_LENGTH 4
int main()
{
    int age[AGE_LENGTH];
    const int TEMP_LENGTH = 4;
    age[0] = 25;
    age[1] = 25;
    age[2] = 25;

    float temp[] = {31.5, 34.5, 32.4}; // implicit conversion to f

    const size_t LENGTH = 26;
    char array_str1[LENGTH] = "Hey guys! ";
    char array_str2[] = "What's  ";

    string str1 = "hey guys";
    string str2 = "hows' wgoing?";

    // strncat(array_str1, array_str2, LENGTH); // gives warning
    strncat(array_str1, array_str2, LENGTH - strlen(array_str1) - 1);

    cout << array_str1 << endl;

    cout << str1 + str2 << endl;

    return 0;
}