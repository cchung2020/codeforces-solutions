#pragma once

#include <iostream>
#include <print>
#include <string>
#include <vector>
#include <algorithm>
#include <ranges>

using namespace std;
using namespace std::views;
using std::ranges::to;

void solve_339a() {
	string line;
	getline(cin, line);

	auto rng_to_int = [](auto r) { return std::stoi(string(r.begin(), r.end())); };

	vector<int> nums = line
		| views::split('+')
		| views::transform(rng_to_int)
		| to<vector>();

	ranges::sort(nums);

	print("{}", nums.front());
	for (int n : nums | drop(1)) {
		print("+{}", n);
	}
}
