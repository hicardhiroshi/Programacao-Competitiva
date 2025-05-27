// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z

#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll int potencia(ll int b, ll int e) {
	if(e == 0) {
		return 1;
	}
	return (b*potencia(b,e-1));
}

int main() {
	ll int a, b, c, d;

	cin >> a >> b >> c >> d;

	if(a == c) {
		if(b>d && a!=1) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	else if(b == d) {
		if(a > c) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	else {
		if((b/gcd(b,d))*log(a) > (d/gcd(b,d))*log(c)) {
			cout << "YES\n";
		}
		/*if(potencia(a,(b/gcd(b,d))) > potencia(c,(d/gcd(b,d)))) {
			cout << "YES\n";
		}*/
		else {
			cout << "NO\n";
		}
	}

	return 0;
}
