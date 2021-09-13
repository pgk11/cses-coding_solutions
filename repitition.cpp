#include <iostream>
using namespace std;

int main() {

	string dna;
	cin >> dna;
	long sa = 1, sc = 1, i = 0;
	char c = dna [0];
	while (c != '\0') {
		if (dna[i] == dna[i+1]) {
			sc += 1;
		}
		else {
			sc = 1;
		}
		//cout <<sc <<" " << sa<<endl;
		if (sc >= sa)
			sa = sc;
		i++;
		c = dna[i];
	}
	cout << sa;
	return 0;
}