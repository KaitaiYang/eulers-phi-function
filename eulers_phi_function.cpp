#include <iostream>
using namespace std;

int IsPrimeToEach(int m, int n) {
	int flg;
	flg = n == 0 ? m : IsPrimeToEach(n, m % n);
	return flg == 1 ? 1 : 0;

	/*
	if(n == 0) {
        flg = m; 
	}
    else {
        return IsPrimeToEach(n, m % n);
    }
	
	if(flg == 1) {
		return 1;
	} else {
		return 0;
	}
	*/
}

int main() {
	
	int m;
	int count = 0;

	cout<<"Please input an integer n: ";
	cin>>m;
	
	for (int i = 1; i < m; i++) {
		if(IsPrimeToEach(m, i)) {
			count++;
		}
	}
	cout<<"Euler\'s phi function of "<<m<<" is "<<count<<","<<endl;
	cout<<"where ";
	for (int j = 1; j < m; j++) {
		if(j != m - 1) {
			if(IsPrimeToEach(m, j)) {
				cout<<"gcd("<<m<<","<<j<<")=1 and ";
			}
		} else {
			if(IsPrimeToEach(m, j)) {
				cout<<"gcd("<<m<<","<<j<<")=1."<<endl;
			}
		}
	}

	return 0;
}