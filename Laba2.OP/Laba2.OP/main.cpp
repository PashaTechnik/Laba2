#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "Header.h"

using namespace std;
int main() {
    string name = "premier_league.csv";
    string s;
    int num=0;
    Counter(s, name, num);
    
    int** score=new int*[num];
    for(int i = 0; i < num; i++) {
        score[i] = new int[num];
    }
    
    string *comands=new string[num];
    int *points=new int[num];
    int *games=new int[num];
    Comands(s, comands, name, num);
    Score(s, score, name, num);
    Points(points, score, num);
    GamesCounter(num,score,games);
    SortComands(points,comands,num,games);
    ofstream f("results.csv");
    cout<<"Command"<<"\t"<<"Points"<<"\t"<<"Games";
    for (int i = 0; i < num; i++) {
        f << comands[i] << "-" << points[i] <<"-"<<games[i]<< endl;
    }
    return 0;
}
