// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, x, y, sum;

	cin >> t;

	for(int i=0; i<t; i++) {
		cin >> x >> y;
		sum = 0;
		for(int j=min(x,y)+1; j<max(x,y); j++) {
			if(j%2 != 0) {
				sum += j;
			}
		}
		cout << sum << "\n";
	}

	return 0;
}
