#include <boost/filesystem.hpp>
#include <fstream>
#include <sstream>
#include "default.h"

using namespace std;

Default::Default()
{
    stringstream ss;
    bool check = boost::filesystem::exists(home + "/.kde4/share/config/");
//     fstream check(home + "/.kde4/share/config/be.shell");
    
    if (!check) ss << home << "/.kde/share/config/";
    else ss << home << "/.kde4/share/config/";
    cfgDir = ss.str();

    ss << "be.shell";
    mnFile = ss.str(); ss.str(string());

    ss << home << "/.kde4/share/apps/be.shell/";
    mnDir = ss.str();
}
