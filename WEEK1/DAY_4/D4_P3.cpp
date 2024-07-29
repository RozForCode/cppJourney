// references - aliases to existing variables, neither pointer nor object
// uses the same syntax as referenced variable and they don't have a address
// hence we can't have a array of references and no  pointers or references to references
// references must be initialized at declaration
// pointers can be null or void but references have a fixed data type and object type
// function arguments in c++ are always passed by value so we can pass by refernces using references
// also helps to avoid copying large objects in for loops
// creation -- // int& ref = a;

// vectors - dynamic-size containers
// memory is automatically managed, generic container class (any type of element, objects of your own classes)
// part of std
// vectors have 2 ends a frontend and a backend
// we can only insert elements through the backend
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<int> primes;
    primes.push_back(3);
    primes.push_back(5);
    primes.push_back(7);
    primes.push_back(11);
    // we can access and change value of elements are certain indexes just like arrays
    cout << "The vector has " << primes.size() << " elements" << endl;
    return 0;
}