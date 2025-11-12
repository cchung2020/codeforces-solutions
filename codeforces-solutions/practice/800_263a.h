#pragma once

#include <iostream>
#include <print>
#include <vector>

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

void solve_263a() {
	vector<vector<int>> grid(5);

	for (auto& line : grid) {
		line = read_ints(5);
	}

	int moves;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (grid[i][j] == 1) {
				moves = abs(i - 2) + abs(j - 2);
			}
		}
	}

	println("{}", moves);
}
