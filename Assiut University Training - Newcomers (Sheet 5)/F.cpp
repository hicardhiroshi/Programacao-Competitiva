// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F

#include <bits/stdc++.h>

using namespace std;

long long int potencia(int b, int e) {
	if(e == 0) {
		return 1;
	}
	return (b*potencia(b,e-1));
}

long long int soma_potencias_pares(int x, int n) {
	int i = 2;
	long long int s = 0;
	while(i<=n) {
		s += potencia(x,i);
		i += 2;
	}
	return s;
}

int main() {
	int x, n;

	cin >> x >> n;

	cout << soma_potencias_pares(x,n) << "\n";

	return 0;
}
