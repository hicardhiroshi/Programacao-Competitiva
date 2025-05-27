// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/C

#include <bits/stdc++.h>

using namespace std;

bool is_odd(int x) {
	return (x%2 != 0) ? true : false;
}

bool is_palindrome(int n, int v[]) {
	for(int i=0; i<n/2; i++) {
		if(v[i] != v[n-1-i]) {
			return false;
		}
	}
	return true;
}
	

int main() {
	int n, d[30], cont=0;

	for(int i=0; i<30; i++) {
		d[i] = 0;
	}

	cin >> n;

	if(is_odd(n)) {
		while(n>0) {
			d[cont++] = n%2;
			n /= 2;
		}
		if(is_palindrome(cont, d)) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	else {
		cout << "NO\n";
	}

	return 0;
}
