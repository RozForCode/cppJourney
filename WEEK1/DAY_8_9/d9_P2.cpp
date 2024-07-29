#include <iostream>
#include <string>
#include <algorithm>
#include <locale>
using namespace std;
// transforming strings is a special case as strings are not containers
//  string class is a class with an interface that's compatible with other container classes
int main()
{
    string s1 = "this is a string";
    cout << s1 << endl;
    string s2(s1.size(), '.');
    cout << s2 << endl;
    transform(s1.begin(), s1.end(), s2.begin(), ::toupper);
    // ::toupper - :: is the scope resolution operator used to specify the scope in which a particular identifier(function,variable,class) is defined.
    // ::s1 - will access the global scope variable s1
    // ::toupper ensures that the toupper function from global namespace is used, as toupper might also be available in other namespaces
    // The function pointer ::toupper is used to refer to the toupper function, which is then called with each character from the input string. The transform function handles the details of calling toupper with the correct argument and placing the result into the output range
    cout << s2 << endl;
    return 0;
}
// understand that a string is a container of characters