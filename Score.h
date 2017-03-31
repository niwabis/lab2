#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cmath>
using namespace std;

class Score{
public:
	Score();
	double Ra, Rb, Ea, Eb;
	void getdata() ;
	void setR() ;
	double round(double src, int n) ;
private:
	int k;
	float s[6];
};
