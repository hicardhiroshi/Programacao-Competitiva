// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;

	cin >> n;

	for(int i=1; i<=12; i++) {
		cout << n << " * " << i << " = " << n*i << "\n";
	}

	return 0;
}
