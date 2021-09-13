#include <iostream>
using namespace std;
#define l long long int
int main () {

	l n;
	cin >> n;
	l t = 0;
	for (l i=5;i<=n;) {

		t += n/i;
		i *= 5;
	}
	cout<<t;
	return 0;
}