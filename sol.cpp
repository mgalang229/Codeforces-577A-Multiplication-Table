#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, x;
	cin >> n >> x;
	int cnt = 0;
	// count the factors of x from 1 to n but make
	// sure that the quotient of the factor of x is within the range of 1 to n (inclusive)
	for (int i = 1; i <= n; i++) {
		if (x % i == 0 && (x / i) <= n) {
			cnt++;
		}
	}
	cout << cnt << '\n';
	return 0;
}
