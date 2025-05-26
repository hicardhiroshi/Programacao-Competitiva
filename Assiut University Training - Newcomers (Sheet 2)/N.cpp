// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/N

#include <bits/stdc++.h>

using namespace std;

int main() {
	char s;
	int n, x;

	cin >> s >> n;

	for(int i=0; i<n; i++) {
		cin >> x;
		for(int j=0; j<x; j++) {
			cout << s;
		}
		cout << "\n";
	}

	return 0;
}
