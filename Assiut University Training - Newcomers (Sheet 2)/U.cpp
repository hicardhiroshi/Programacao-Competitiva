// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U

#include <bits/stdc++.h>

using namespace std;

int sum(int n, int v[]) {
	int s = 0;
	for(int i=0; i<n; i++) {
		s += v[i];
	}
	return s;
}

int main() {
	int n, a, b, d[5], s = 0;

	for(int i=0; i<5; i++) {
		d[i] = 0;
	}

	cin >> n >> a >> b;

	for(int i=1; i<=n; i++) {
		int cont = 0, x = i;
		while(x>0) {
			d[cont++] = x%10;
			x /= 10;
		}
		if(sum(cont, d)>=a && sum(cont, d)<=b) {
			s += i;
		}
	}

	cout << s << "\n";

	return 0;
}
