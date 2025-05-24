// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U

#include <bits/stdc++.h>

using namespace std;

int main() {
	float n;

	cin >> n;

	if(n != (int)n) {
		printf("float %d %.3f\n", (int)n, (n-(int)n));
	}
	else {
		cout << "int " << (int)n << "\n";
	}

	return 0;
}
