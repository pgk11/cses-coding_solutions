#include <bits/stdc++.h>
using namespace std;

int main () {

	int n;
	cin >> n;
	long long tmp, sum = 0, grp = 0;
	vector <long long> p(n);
	for (int i = 0; i < n; i++){
		cin >> tmp;
		p.push_back(tmp);
		sum += tmp;
	}

	sort(p.begin(), p.end());
	long long a = (sum % 2 == 0)? sum/2: sum/2 + 1;
	do {

		int i = 0;
		grp += p[i++];
	} while (grp < a || i < n);
	cout << grp - a;
	return 0;
}