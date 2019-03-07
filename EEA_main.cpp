// Created by CodeDanCode

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void EEA(int, int);

int main() {
	
	int first;
	int second;
	string answer;
	
	cout << "please enter first number : ";
	cin >> first;
	while (first < 0) {
		cout << "please enter a number greater than 0: ";
		cin >> first;
	}
	cout << endl;
	cout << "please enter second number : ";
	cin >> second;
	while (second < 0) {
		cout << "please enter a number greater than 0: ";
		cin >> second;
	}
	cout << endl;
	cout << "would you like to find the GCD for " << first << " and " << second << " and there coefficients S and T."<<endl;
	cout << endl;
	cout << "y or n : ";
	cin >> answer;
	cout << endl;
	if (answer == "yes" || answer == "y") {
		EEA(first, second);
	}

	cout << endl;
	system("PAUSE");

	return 0;
}

void EEA(int first, int second) {
	int old_s = 1, s = 0;
	int old_t = 0, t = 1;
	int r = second, old_r = first;
	int q,S,T,R;

	while (r > 0) {
		q = old_r / r;
		
		R = old_r - q * r;
		old_r = r;
		r = R;
		
		S = old_s - q * s;
		old_s = s;
		s = S;
		
		T = old_t - q * t;
		old_t = t;
		t = T;
		
	}
	cout << "GCD = " << old_r <<",S = " << old_s << ",T = " << old_t << endl;

}








