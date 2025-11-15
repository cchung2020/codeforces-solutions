#pragma once

#include <iostream>
#include <print>
#include <string>
#include <vector>
#include <algorithm>
#include <ranges>

using namespace std;

void solve_122a() {
	int n;
	cin >> n;

	vector<int> luckies;

	for (int i = 1; i < 1000; i++) {
		string num = to_string(i);
		if (ranges::all_of(num, [](char c) { return c == '7' || c == '4'; })) {
			luckies.push_back(i);
		}
	}

	auto divides_n_evenly = [n](int lucky) { return n % lucky == 0; };
	bool divisible = ranges::any_of(luckies, divides_n_evenly);

	println("{}", divisible ? "YES" : "NO");
}
