// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b, c, v[3], m, aux;

	cin >> a >> b >> c;

	v[0] = a;
	v[1] = b;
	v[2] = c;

	for(int i=2; i>0; i--) {
		m = 0;
		for(int j=1; j<=i; j++) {
			if(v[j] > v[m]) {
				m = j;
			}
		}
		aux = v[i];
		v[i] = v[m];
		v[m] = aux;
	}

	for(int i=0; i<3; i++) {
		cout << v[i] << "\n";
	}


	cout << "\n" << a << "\n" << b << "\n" << c << "\n";

	return 0;
}
