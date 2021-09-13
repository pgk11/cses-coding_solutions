#include <iostream>
using namespace std;
int main () {

	long long  t;
	cin >> t;
	for (int i = 1; i <= t; i++) {

		long long x, y;
		long long ans = 0;
		cin >> y >> x;
		if (x >= y) {

			if (x%2 == 1){
				ans = x*x - y + 1;
			}
			else {
				ans = (x-1)*(x-1) + y;
			}
		}
		else {

			if (y%2 == 1){
				ans = (y-1)*(y-1) + x;
			}
			else {
				ans = y*y - x + 1;
			}
		}
		cout << ans << endl;
	}
	return 0;
}