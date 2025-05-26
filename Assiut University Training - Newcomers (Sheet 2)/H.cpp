// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H

#include <bits/stdc++.h>

using namespace std;

int main() {
	int x, i;

	cin >> x;

	for(i=2; i<x; i++) {
		if(x%i == 0) {
			break;
		}
	}

	if(i==x) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}

	return 0;
}
