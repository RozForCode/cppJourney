// STD containers - done
// STD iterators - start
// Accessing iterators - iterators act alot like a poitner they can be incremented or decremented like a pointer
/* simple example
    vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int>::iterator it1; // iterator object
    vector<int>::iterator iBegin = v1.begin();
    vector<int>::iterator iEnd = v1.end();

    for (it1 = iBegin; it1 < iEnd; ++it1)
    {
        cout << *it1 << " ";
    }
*/
// input iterator  - most limited
// capable of reading not writing, incrementing not decrementing
// once a value is read it cannot be read again
// iostream object uses input iterator for cin
#include <iostream>
#include <iterator>
#include <vector>
#include <string>
using namespace std;

int main()
{
    cout << "Two numeric values: " << flush; // no buffer forces output to be written to the stream immediately.
    cin.clear();
    istream_iterator<string> eos;     // default constructor points to end of stream
    istream_iterator<string> it(cin); // stdin iterator
    if (it == eos)
    {
        return 0;
    }
    auto d2 = *it;

    cout << d2;
    return 0;
}