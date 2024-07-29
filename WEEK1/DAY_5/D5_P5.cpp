// io stream
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // reading
    ifstream inFile;
    string str;
    int number;
    char letter;

    // using inFile
    inFile.open("people.txt");
    if (inFile.fail())
    {
        cout << "File not found" << endl;
    }
    else
    {
        while (!inFile.eof())
        {
            getline(inFile, str);
            cout << str << endl;
        }
        inFile.close();
    }
    // writing
    ofstream outFile;
    float a = 4.344f, b = 5.304f;
    outFile.open("people.txt");
    if (outFile.fail())
    {
        cout << "Couldn't open file" << endl;
    }
    else
    {
        outFile << "a = " << a << endl;
        outFile << "b = " << b << endl;
        outFile << "a+b=" << a + b << endl;
        outFile << "a*b=" << a * b << endl;
    }
    return 0;
}