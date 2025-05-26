// https://codeforces.com/group/MwSDmqGsZm/contest/219432/problem/O

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;

	cin >> n;

	for(int i=1; i<=n; i++) {
		for(int j=0; j<i; j++) {
			cout << '*';
		}
		cout << "\n";
	}

	return 0;
}
