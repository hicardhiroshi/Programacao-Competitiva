// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N

#include <bits/stdc++.h>

using namespace std;

int main() {
	char x;

	cin >> x;

	if(x>='a' && x<='z') {
		x -= 32;
	}
	else if(x>='A' && x<='Z') {
		x += 32;
	}

	cout << x << "\n";

	return 0;
}
