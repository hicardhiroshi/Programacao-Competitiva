// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, n;

	cin >> t;

	for(int i=0; i<t; i++) {
		cin >> n;
		do {
			cout << (n%10) << ' ';
			n /= 10;
		} while(n>0);
		cout << "\n";
	}

	return 0;
}
