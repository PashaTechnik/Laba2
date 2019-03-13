#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "Header.h"
using namespace std;
int main() {
    string name = "premier_league.csv";
    string s;
    string comands[20];
    int score[20][20];
	int points[20];
	Comands(s, comands, name);
	Score(s, score, name);
	Points(points, score);
	ofstream f("results.csv");
	for (int i = 0; i < 20; i++) {
		f << comands[i] << "-" << points[i] << endl;
	}
	return 0;
}
