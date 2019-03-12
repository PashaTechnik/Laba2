#include "Header.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
void Commands(string s, string commands[], string name)
{
    ifstream file;
    file.open(name);
    
    for (int i = 0; i < 20; i++)
    {
        size_t a;
        getline(file, s);
        a = s.find(",");
        commands[i] = s.substr(0, a);
    }
    file.close();
}

