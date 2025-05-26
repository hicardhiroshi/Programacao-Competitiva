// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m, sum;

	while(true) {
		cin >> n >> m;

		if(n<=0 || m<=0) {
			break;
		}

		sum = 0;
		for(int i=min(n,m); i<=max(n,m); i++) {
			cout << i << ' ';
			sum += i;
		}
		cout << "sum =" << sum << "\n";
	}

	return 0;
}
