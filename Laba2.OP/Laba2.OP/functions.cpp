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

void Score(string s, int score[20][20], string name)
{
    ifstream afile(name);
    string N;
    for (int k = 0; k < 20; k++)
    {
        getline(afile, s);
        size_t a = s.length();
        int i = 0;
        
        for (int j = 0; j < a; j++)
        {
            if (isdigit(s[j]))
            {
                N = s[j];
                score[i][k] = stoi(N);
                i++;
            }
        }
    }
    
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            cout << score[j][i] << "\t";
        }
        cout << endl;
    }
    afile.close();
}void Points(int points[20], int score[20][20])
{
    for (int i = 0; i < 20; i++)
    {
        points[i] = 0;
        for (int j = 0; j < 18; j = j + 2)
        {
            if (score[j][i] > score[j + 1][i])
            {
                points[i] = points[i] + 3;
            }
            
            
            else if (score[j][i] == score[j + 1][i])
            {
                points[i] = points[i] + 1;
            }
            
            else
            {
                points[i] = points[i] + 0;
            }
        }
    }
}



