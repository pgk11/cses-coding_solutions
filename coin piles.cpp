#include <iostream>
using namespace std;



/*443 445, 442 443, 440 445, 438 444, 441 444, 440 442*/
int main () {

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {

		long long a, b;
		cin >> a >> b;
		if ((a == b && a%3 == 0) || a == 2*b || b == 2*a)
			cout << "YES" << endl;
		else if (((a+b)%3 == 0) && (a < 2*b && b < 2*a)){
			cout << "YES" << endl;
		}
		else 
			cout <<"NO" << endl;
	}
	return 0;
}