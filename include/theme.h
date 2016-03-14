#ifndef LIBBESHELL_H_INCLUDE
#define LIBBESHELL_H_INCLUDE

#include <iostream>
using namespace std;

class Theme
{
public:
    Theme();
    ~Theme();
    string path;
private:
    string name;
};

#endif //LIBBESHELL_H_INCLUDE
