#include <iostream>
#include <fstream>
#include "../include/default.h"
#include "../include/theme.h"

using namespace std;

Theme::Theme()
{
    Default d;
    Default *pd;
    pd = &d;
    ifstream f;
    f.open(pd->mnFile, ios::in);

    string line, prefix = "Theme=";

    while (f.good()) {
        getline(f, line);
        if(line.substr(0, prefix.size()) == prefix) {
            name = line.substr(prefix.size());
        }
    }

    f.close();
    
    path = pd->mnDir + "Themes/" + name;
}
