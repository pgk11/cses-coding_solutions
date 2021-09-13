#include <iostream>
using namespace std;

int main() {

	long long n;
	cin >> n;
	unsigned long long int a = 1;
	for (long long i = 1; i <= n; i++) {

		a = 2*a%((int)1e9 + 7);
	}
	cout << a;
	return 0;
}