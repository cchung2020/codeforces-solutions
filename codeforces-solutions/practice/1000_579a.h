#include <iostream>
#include <print>

using namespace std;

void solve_579a() {
	int n;
	cin >> n;

	int bacteria = 0;

	while (n > 0) {
		int exp = 1;
		while (exp * 2 <= n) {
			exp *= 2;
		}

		n -= exp;
		bacteria++;
	}

	println("{}", bacteria);
}
