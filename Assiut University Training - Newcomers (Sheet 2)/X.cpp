// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, n, b[31], c, cont;

	for(int i=0; i<31; i++) {
		b[i] = 0;
	}

	cin >> t;

	for(int i=0; i<t; i++) {
		cin >> n;
		c = 0;
		while(n>0) {
			b[c++] = n%2;
			n /=2;
		}
		cont = 0;
		for(int j=0; j<c; j++) {
			if(b[j] == 1) {
				cont++;
			}
		}
		cout << (long long int)(pow(2, cont)-1) << "\n";
	}

	return 0;
}
