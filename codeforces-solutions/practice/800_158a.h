#pragma once

#include <print>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <ranges>

using namespace std;

vector<int> read_ints(int count) {
	vector<int> vec;

	int num;

	for (int i = 0; i < count; i++) {
		cin >> num;
		vec.push_back(num);
	}

	return vec;
}

void solve_158a() {
	int n, k;

	cin >> n >> k;

	vector<int> nums = read_ints(n);
	int k_elem = nums[k - 1];

	int participants = ranges::count_if(nums, [&](int p) {
		return p >= k_elem && p > 0;
		});
	println("{}", participants);
}
