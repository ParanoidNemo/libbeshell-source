#ifndef DEFAULT_H_INCLUDE
#define DEFAULT_H_INCLUDE

#include <iostream>
#include <stdlib.h>
using namespace std;

class Default
{
    friend class Theme;
public:
    Default();
    ~Default();
private:
    const string home = getenv("HOME");
    string cfgDir;
    string mnFile;
    string mnDir;
};

#endif //DEFAULT_H_INCLUDE
