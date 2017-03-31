#include"Score.h"
Score::Score(){}
void Score::getdata() {
		ifstream inFile("file.in", ios::in);
		if (!inFile) {
			cerr << "fail opening file.in" << endl;
			exit(1);
		}
		inFile >> k >> Ra >> Rb >> s[0] >> s[1] >> s[2] >> s[3] >> s[4] >> s[5];
	}
void Score::setR() {
		
		ofstream outFile("file.out", ios::out);
		if (!outFile) {
			cerr << "fail opening file.out" << endl;
			exit(2);
		}
		outFile << Ra << "\t" << Rb << "\t" << endl;
		for (int i = 0; i <= 5; i++) {
			Ea = 1 / (1 + pow(10, (Rb - Ra) / 400));
			Eb = 1 / (1 + pow(10, (Ra - Rb) / 400));
			Ra = Ra + k*(s[i] - round(Ea, 3));
			Rb = Rb + k*(1 - s[i] - round(Eb, 3));
			//cout<<k*(s[i] - (1 / (1 + pow(10, (Rb - Ra) / 400))))<<"\t"<<Rb<<endl;
			Ra = round(Ra, 0);
			Rb = round(Rb, 0);
			outFile << Ra << "\t" << Rb << "\t" << endl;
		}
	}
	
	
double Score::round(double src, int n) {
		double res;
		int i, k = 1;
		for (i = 0; i<n; i++)k *= 10;
		res = int(src*k + 0.5);
		res /= k;
		return res;
	}
