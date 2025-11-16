#pragma once

#include <iostream>
#include <print>
#include <vector>
#include <algorithm>
#include <ranges>

using namespace std;

void solve_230a() {
	int strength, n;
	cin >> strength >> n;

	vector<pair<int, int>> dragons(n);
	for (auto& [dragon_strength, bonus] : dragons) {
		cin >> dragon_strength >> bonus;
	}

	ranges::sort(dragons);

	bool win = true;

	for (auto [dragon_strength, bonus] : dragons) {
		win &= strength > dragon_strength;
		if (win) {
			strength += bonus;
		}
	}

	println("{}", win ? "YES" : "NO");
}
