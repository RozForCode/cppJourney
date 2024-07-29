// compiler changes c++ code to assembly language -> which goes to assembler which changes assembly file into object file
// iostream string are such object files that we include in our program
// all these object files are then sent to the linker and makes in executable binary file and then the program runs
// header files have the .h extention
// implementation files have .cpp extention and contain executable code

// lets say you have to execute multiple files so you don't want to include header files again and again
// then what you can do is use #pragma or
// #include "Cow_Pur.h" // this would make a new header file, this way you can make your own header files and include them in
// cow::cow(string name){
// this->name = name}
// the code while checking if these have been include or not

#include <string>
using namespace std;
#ifndef Cow_Pur // checks if Cow_Pur file is included or not
// #include "Cow_Pur" // if not this includes the Cow_Pur file
class cow
{
public:
    cow(string name);

private:
    string name;
};
#endif // Cow_Pur
