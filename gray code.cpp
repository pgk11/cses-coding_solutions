#include <bits/stdc++.h>
using namespace std;

// [0, 1, 3, 2, 6, 7, 5, 4, 12, 13, 15, 14, 10, 11, 9, 8, ]

void dec2bin (long long int val, short s) {
	
	for (short i = s-1; i >= 0; i--) {

		long long k = val >> i;
		if (k & 1)
			cout << "1";
		else
			cout << "0";
	}
}
int main () {

	unsigned short a; // input power
	cin >> a;
	vector <long long> ar;
	long long int i = 0, itrs = 1; // counter for number of lines
	itrs = pow(2, a); // calc no of lines to print

	for (i = 0; i < 1<<a; i++) { // getting grey code numbers for itrs lines

		ar.push_back(i ^ (i>>1));

	}

	for (i = 0; i < ar.size(); i++) {

		dec2bin(ar[i], a);
		cout << endl;
	}
	return 0;
}