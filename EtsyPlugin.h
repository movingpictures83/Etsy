#ifndef ETSYPLUGIN_H
#define ETSYPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class EtsyPlugin : public Plugin
{
public: 
 std::string toString() {return "Etsy";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
