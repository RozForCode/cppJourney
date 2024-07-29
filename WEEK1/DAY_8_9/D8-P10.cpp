
#include <iostream>
#include <iterator>
#include <forward_list> ///- single linked list type| these iterators cnanot be decremented
// range based operator uses a forward iterator
#include <string>
using namespace std;

int main()
{
    // output iterator
    ostream_iterator<int> output(cout, " "); // this iterator writes int values to the stadard output stream and second arugment is the delimtier

    for (int i : {3, 197, 43})
        *output++ = i; // first the dereference value is assigned value of i and then the iterator is incremented
    // same as *output = 1; ++output;
    cout << endl;

    // forward iterator - like input and output iterator but with few other capabilities
    forward_list<int> f1 = {1, 2, 3, 4, 5};
    forward_list<int>::iterator i1;
    // this iterator cannot be decremented
    for (i1 = f1.begin(); i1 != f1.end(); ++i1)
        cout << *i1 << " ";
    cout << endl;
    return 0;
}
// BiDirectional - like forward but can be decremented
// random access iterators - most complete iterator, offers all the functionality of a C-pointer
// while decrementing in for loop we use .end() for the start but it points start the last element so we deference value like this *(--i1)
// random access iterator can - it1 = v1.begin() +5; it2 = v1.begin()-3;
