// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M

#include <bits/stdc++.h>

using namespace std;

int main() {
	char x;

	cin >> x;

	if(x<'0' || x>'9') {
		cout << "ALPHA\n";
		if(x>='A' && x<='Z') {
			cout << "IS CAPITAL\n";
		}
		else if(x>='a' && x<='z') {
			cout << "IS SMALL\n";
		}
	}
	else {
		cout << "IS DIGIT\n";
	}

	return 0;
}
