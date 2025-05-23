// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y

#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b, c, d, res;

	cin >> a >> b >> c >> d;

	a %= 100;
	b %= 100;
	c %= 100;
	d %= 100;
	res = (a*b*c*d)%100;

	if(res < 10) cout << "0" << res << "\n";
	else cout << res << "\n";

	return 0;
}

