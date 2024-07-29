#ifndef STACK
#define STACK
#include <exception>
using namespace std;

// exception class
class StackException : public exception // this means that this class inherits from the standard 'exception' class of the std. This allows StackException to be used in exception handling contexts where a standard 'exception' is excepted/
{
    const char *msg;
    StackException(){}; // this constructor is private which ensures that StackException objs can only be created with a message(explicit constructor provided below.)

public:
    explicit StackException(const char *s) throw() : msg(s) {}
    // explicit constructor - means that the constructor cannot b be used for implicit conversion - to avoid unintentional type conversions that can lead to bugs.
    const char *what() const throw() { return msg; } // this function overrites the what method of exception class
};

// simple fixed-size LIFO stack template
template <typename T>
class Stack
{
private:
    static const int defaultSize = 10;
    static const int maxSize = 1000;
    int _size;
    int _top;
    T *stackPtr;

public:
    explicit Stack(int s = defaultSize);
    ~Stack() { delete[] stackPtr; }
    T &push(const T &); // these functions return reference to type T objects
    T &pop();
    bool isEmpty() const { return _top < 0; }
    bool isFull() const { return _top >= _size - 1; }
    int top() const { return _top; }
    int size() const { return _size; }
};
template <typename T>
Stack<T>::Stack(int s)
{
    if (s > maxSize || s < 1)
        throw StackException("Invalid stack size");
    else
        _size = s;
    stackPtr = new T[_size];
    _top = -1;
}
template <typename T>
T &Stack<T>::push(const T &i)
{
    if (isFull())
        throw StackException("Stack full");
    return stackPtr[++_top] = i;
    // in c++ *pointer[index] == *(pointer+index)
}
template <typename T>
T &Stack<T>::pop()
{
    if (isEmpty())
        throw StackException("Stack empty");
    return stackPtr[_top--];
}
#endif // _STACK