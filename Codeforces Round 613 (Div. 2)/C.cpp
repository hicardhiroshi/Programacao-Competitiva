// https://codeforces.com/problemset/problem/1285/C

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll mmc(ll a, ll b) {
	return (a * b)/gcd(a, b);
}

int main() {
	ll X, a, b;

	cin >> X;

	for(ll i=sqrt(X); i>0; i--) {
		if(X % i == 0) {
			a = i;
			b = X/a;
			if(mmc(a, b) == X) break;
		}
	}

	cout << a << ' ' << b << endl;

	return 0;
}

