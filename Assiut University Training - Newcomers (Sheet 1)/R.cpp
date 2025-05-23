// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R

#include <bits/stdc++.h>

using namespace std;

int main() {
	int d, m, y;

	cin >> d;

	y = d/365;
	d %= 365;
	m = d/30;
	d %= 30;

	cout << y << " years\n" << m << " months\n" << d << " days\n";

	return 0;
}

