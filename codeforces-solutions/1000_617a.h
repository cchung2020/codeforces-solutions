#pragma once

#include <iostream>
#include <print>

using namespace std;

void solve_617a() {
	int x;
	cin >> x;

	int total = 0;
	for (int step : { 5, 4, 3, 2, 1 }) {
		if (x >= step) {
			total += x / step;
			x = x % step;
		}
	}

	println("{}", total);
}
