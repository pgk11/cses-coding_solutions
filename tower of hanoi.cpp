#include <bits/stdc++.h>
using namespace std;
/*[1, 3, 7, 15, 31, 63, ...]*/

void tower(int n, int from_rod, int to_rod, int aux_rod) { 
    if (n == 1) { 
        cout << from_rod << " " << to_rod<<endl; 
        return; 
    } 
    tower(n - 1, from_rod, aux_rod, to_rod); 
    cout << from_rod <<" " << to_rod << endl; 
    tower(n - 1, aux_rod, to_rod, from_rod); 
} 

int main () {

	unsigned short n;
	cin >> n;
	int d = n;
	int k = pow(2, n) - 1;
	vector<int> a, b, c;
	for (int i = 0; i < n; i++)
		a.push_back(d--);
	cout << k << endl;
	
	tower(n, 1, 3, 2);

	return 0;
}