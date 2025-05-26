// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, n;
	long long int f;

	cin >> t;

	for(int i=0; i<t; i++) {
		cin >> n;
		f = 1;
		for(int j=2; j<=n; j++) {
			f *= j;
		}
		cout << f << "\n";
	}

	return 0;
}
