// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V

#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b;
	char s;
	string res;

	cin >> a >> s >> b;

	if(s == '<') {
		res = (a<b) ? "Right" : "Wrong";
	}
	else if(s == '>') {
		res = (a>b) ? "Right" : "Wrong";
	}
	else if(s == '=') {
		res = (a==b) ? "Right" : "Wrong";
	}

	cout << res << "\n";

	return 0;
}
