#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "Header.h"
using namespace std;
int main() {
    string name = "premier_league.csv";
    string s;
    string commands[20];
    int score[20][20];
	int points[20];
	Commands(s, commands, name);
	Score(s, score, name);
	Points(points, score);
	ofstream f("results.csv");
	for (int i = 0; i < 20; i++) {
		f << commands[i] << "-" << points[i] << endl;
	}
	return 0;
}
