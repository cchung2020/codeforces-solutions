#pragma once

#include <iostream>
#include <print>

using namespace std;

void solve_4a() {
	int num;
	cin >> num;

	if (num > 2 && num % 2 == 0) {
		println("YES");
	}
	else {
		println("NO");
	}
}
