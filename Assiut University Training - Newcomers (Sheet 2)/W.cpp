// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;

	cin >> n;

	for(int i=0; i<n; i++) {
		for(int j=0; j<n-1-i; j++) {
			cout << ' ';
		}
		for(int j=0; j<i; j++) {
			cout << '*';
		}
		cout << '*';
		for(int j=0; j<i; j++) {
			cout << '*';
		}
		cout << "\n";
	}
	for(int i=n-1; i>=0; i--) {
		for(int j=0; j<n-1-i; j++) {
			cout << ' ';
		}
		for(int j=0; j<i; j++) {
			cout << '*';
		}
		cout << '*';
		for(int j=0; j<i; j++) {
			cout << '*';
		}
		cout << "\n";
	}

	return 0;
}
