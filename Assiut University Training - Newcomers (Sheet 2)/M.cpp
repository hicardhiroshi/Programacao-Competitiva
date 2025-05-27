// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M

#include <bits/stdc++.h>

using namespace std;

bool is_lucky(int n, int v[]) {
	for(int i=0; i<n; i++) {
		if(v[i]!=4 && v[i]!=7) {
			return false;
		}
	}
	return true;
}

int main() {
	int a, b, d[6];
	bool flag = false;

	for(int i=0; i<6; i++) {
		d[i] = 0;
	}

	cin >> a >> b;

	for(int i=a; i<=b; i++) {
		int cont = 0, x = i;
		while(x>0) {
			d[cont++] = x%10;
			x /= 10;
		}
		if(is_lucky(cont, d)) {
			flag = true;
			cout << i << ' ';
		}
	}

	if(flag) {
		cout << "\n";
	}
	else {
		cout << "-1\n";
	}

	return 0;
}
