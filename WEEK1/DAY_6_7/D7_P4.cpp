// List - like  vector but optimized for rapid insert and delete operations. Do not support random access.
// good for situations where you don't need random access but you'll be inserting and erasing alot of elements.
#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{

    list<int> l1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << l1.size() << endl;
    cout << l1.front() << endl;
    l1.push_back(47);
    cout << l1.back() << endl;

    // to insert and erase elements in list we need iterators
    list<int>::iterator i1 = l1.begin();
    cout << *(l1.begin()) << endl;
    cout << *i1 << endl;
    cout << endl
         << endl;
    while (*i1 != l1.back())
    {
        cout << *i1 << " ";
        // *i1 += 1; // if we use this iterator won't move and first index value will be equal to 47;
        // in random access iterators += will work
        i1++;
    }
    l1.insert(i1, 123);
    l1.erase(i1);
    /*
    Iterators and Pointers Are Not the Same: Although iterators can behave like
    pointers in some contexts, they are more general and can represent positions in a wide
    range of container types. The += operator is defined for random access iterators
    (like those of std::vector or std::deque), but not for other iterator categories
     like bidirectional iterators (like those of std::list) or input/output iterators.
    */

    l1.remove(8); // this takes values

    // while loops to to find elements by incrementing iterators
    // to find 112 and 9 and replace them
    auto i2 = i1 = l1.begin();
    while (*++i1 != 112 && i1 != l1.end())
        ;
    while (*++i2 != 9 && i2 != l1.end())
        ;
    return 0;
}
// random access - ability of an iterator or pointer to directly access any element in sequence container like arrays or vectors in constant time.
//