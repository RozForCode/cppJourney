// DEQUE versatile container that supports efficient intsertions and deletions at both ends , along with fast random access.
// scenarios where you need to frequently add or remove elements from the front or back while still needing random access to elements.
/*push_front(value): Insert an element at the front.
push_back(value): Insert an element at the back.
Deletion:

pop_front(): Remove the element from the front.
pop_back(): Remove the element from the back.
Access:

operator[]: Access elements by index.
at(index): Access elements by index with bounds checking.
Size and Capacity:

size(): Get the number of elements.
empty(): Check if the deque is empty.

*/
#include <deque>
#include <queue>
// queue FIFO
#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
    // queue from a list
    list<int> l1 = {1, 2, 3, 4, 5};
    queue<int, list<int>> q1(l1);
    while (!q1.empty())
    {
        cout << q1.front() << " ";
        q1.pop();
    }
    cout << endl;
    // default queue (deque)
    queue<string> q2; // second parameter is bydefault dequeu it is more optimzed for queue
    for (string s : {"one", "two", "three", "four"})
        q2.push(s);
    while (!q2.empty())
    {
        cout << q2.front() << " ";
        q2.pop();
    }
    return 0;
}
// stack is also similar , it takes type and type of the underliying container
// LIFO , elements poured in from the top