#ifndef DEFAULT_H_INCLUDE
#define DEFAULT_H_INCLUDE

#include <iostream>
using namespace std;

class Default
{
    friend class Theme;
public:
    const string home = getenv("HOME");
    string cfgDir;
    string mnFile;
    string mnDir;
    Default();
};

#endif //DEFAULT_H_INCLUDE
