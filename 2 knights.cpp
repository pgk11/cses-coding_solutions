#include <iostream>

using namespace std;
// 0, 6, 28, 96, 252, 550, 1056, 1848
// 1*0, 2*3, 4*7, 8*12 ...
int main () {

	long long n;
	cin >> n;
	long long a = 2, b = 0, ad = 0, bd = 3;
	for (long long i = 0; i < n; i++) {
		long long ans = (a + ad)*(b + bd);
		if (i == 0)
			cout << "0" << endl;
		else {

			cout << ans << endl;
			ad = ad + 2*i;
			bd += 3 + i;
			//cout << ad << " " << bd << endl;
		}
		
	}
	return 0;
}