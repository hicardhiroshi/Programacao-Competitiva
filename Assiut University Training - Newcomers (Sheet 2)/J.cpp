// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;

	cin >> n;

	int p[n];

	for(int i=0; i<n; i++) {
		p[i] = i+1;
	}

	p[0] = 0;
	for(int i=1; i<sqrt(n); i++) {
		if(p[i] != 0) {
			int k = 2;
			while(p[i]*k <= n) {
				p[p[i]*k-1] = 0;
				k++;
			}
			for(int j=2; j<p[i]; j++) {
				if(p[i]%j == 0) {
					p[i] = 0;
				}
			}
		}
	}

	for(int i=0; i<n; i++) {
		if(p[i] != 0) {
			cout << p[i] << ' ';
		}
	}
	cout << "\n";

	return 0;
}
