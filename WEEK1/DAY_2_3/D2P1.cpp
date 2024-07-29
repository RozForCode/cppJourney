#include <iostream>
using namespace std;
// type casting examples
// expression types always convert to the largest type present
// the length of int type is implementation dependant
int main()
{
    int fareh = 112;
    int cels;
    // cels = (5 / 9) * (fareh - 32); //gives 0 cause of integer division
    cels = ((float)5 / 9) * (fareh - 32);
    // cels = (5 / 9.0) * (fareh - 32); // same as above
    float weight = 10.99;
    cout << "weight is : " << weight << endl;
    cout << "interger part of weigh is : " << (int)weight << endl;
    cout << "fractional part of weigh is : " << (weight - (int)weight) << endl;
    return 0;
}