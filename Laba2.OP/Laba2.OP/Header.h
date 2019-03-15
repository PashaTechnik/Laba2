#ifndef Header_h
#define Header_h
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

void Comands(string s, string *comands, string name,int num);
void Score(string s, int **score, string name,int num);
void Points(int *points, int **score,int num);
void Counter(string s,string name,int &num);
void SortComands(int *points,string *comands,int num,int *games);
void GamesCounter(int num,int **score,int *games);
#endif
