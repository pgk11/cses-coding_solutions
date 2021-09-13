#include <iostream>
using namespace std;

int main() {

	long n = 0, s = 0;
	cin >> n;
	long ar[n-1];
	for (long i = 0; i < n-1; i++) {
		cin >> ar[i];
		s += ar[i];
	}
	long sum = n*(n+1)/2;
	cout << sum - s;
	return 0;
}