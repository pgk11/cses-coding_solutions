#include <iostream>
using namespace std;

int main () {

	long n, d;
	cin >> n;

	if (n%2 == 0 && n%4 != 0) {

		cout << "NO";
	}
	else if (n%4 == 3) {

		cout << "YES" << endl;
		d = n/2;
		cout << (n - d) << endl;
		cout << "1 2";
		if (n > 4) {
			for (long i = 4; i <= n; i++) {

				if (i%4 == 0 || i%4 == 3)
					cout << " " << i;
				
			}
		}
		cout << endl;
		cout << long (n/2) << endl;
		cout << "3";
		if (n > 4) {
			for (long i = 4; i <= n; i++) {

				if (i%4 == 1 || i%4 == 2)
					cout << " " << i;
				
			}
		}
	}
	else if (n%4 == 0) {

		cout << "YES" << endl;
		d = n/2;
		cout << d << endl;
		cout << "2";
		for (long i = 3; i <= n; i++) {

			if (i%4 == 2 || i%4 == 3)
				cout << " " << i;
				
		}
		cout << endl;
		cout << long(n/2) << endl;
		cout << "1";
		for (long i = 2; i <= n; i++) {

			if (i%4 == 1 || i%4 == 0)
				cout << " " << i;
				
		}
	}
	else {
		cout << "NO";
	}
	return 0;
}