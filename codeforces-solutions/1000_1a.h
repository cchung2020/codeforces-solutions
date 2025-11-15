#pragma once

#include <iostream>
#include <print>

using namespace std;

void solve_1a() {
	long long int n, m, a;
	cin >> n >> m >> a;

	long long int nSide = n / a + (n % a != 0);
	long long int mSide = m / a + (m % a != 0);

	println("{}", nSide * mSide);
}
