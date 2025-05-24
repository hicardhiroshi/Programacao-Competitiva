// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b, c, max, min;

	cin >> a >> b >> c;

	max = (a+b+abs(a-b))/2;
	max = (max+c+abs(max-c))/2;

	min = (a+b-abs(a-b))/2;
	min = (min+c-abs(min-c))/2;

	cout << min << ' ' << max << "\n";

	return 0;
}
