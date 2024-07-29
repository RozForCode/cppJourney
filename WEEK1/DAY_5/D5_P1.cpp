#include <iostream>
using namespace std;
#include <string>
#include <vector>
class cow
{
public:
    cow(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return this->name;
    }

private:
    string name;
};
int main()
{
    vector<cow> cattle;
    cattle.push_back(cow("bindo"));
    cattle.push_back(cow("chango"));
    cattle.push_back(cow("bando"));
    cattle.push_back(cow("kindo"));

    cout << cattle.begin()->getName() << endl;        // iterators are basically pointers. begin() function returns can iterator to th first element
    cout << (cattle.end() - 1)->getName() << endl;    // end() function return an iterator to the element afte the last element so we decrease the returned iterator by one to access the last element.
    cout << prev(cattle.end(), 2)->getName() << endl; // prev function takes 2 arguments, iterator and no.of position you want to go back
    return 0;
}