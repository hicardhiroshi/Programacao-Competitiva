// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C

#include <bits/stdc++.h>

using namespace std;

int main() {
	int N, a, e=0, o=0, p=0, n=0;

	cin >> N;

	for(int i=0; i<N; i++) {
		cin >> a;
		if(a<0) {
			n++;
			if(a%2 == 0) {
				e++;
			}
			else {
				o++;
			}
		}
		else if(a>0) {
			p++;
			if(a%2 == 0) {
				e++;
			}
			else {
				o++;
			}
		}
		else {
			e++;
		}
	}

	cout << "Even: " << e << "\nOdd: " << o << "\nPositive: " << p << "\nNegative: " << n << "\n";

	return 0;
}
