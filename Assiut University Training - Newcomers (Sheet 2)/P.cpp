// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n; 

	cin >> n;

	for(int i=n; i>0; i--) {
		for(int j=0; j<i; j++) {
			cout << '*';
		}
		cout << "\n";
	}

	return 0;
}
