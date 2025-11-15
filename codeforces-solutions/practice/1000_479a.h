#pragma once

#include <iostream>
#include <print>

using namespace std;

void solve_479a() {
	int a, b, c;
	cin >> a >> b >> c;

	int answer = max(a + b + c, max((a + b) * c, max(a * (b + c), a * b * c)));

	std::println("{}", answer);
}
