#pragma once

#include <iostream>
#include <print>

using namespace std;

void solve_58a() {
	string hello = "hello";
	int hIndex = 0;

	string word;
	cin >> word;

	for (char c : word) {
		if (hIndex < 5 && c == hello[hIndex]) {
			hIndex++;
		}
	}

	println("{}", hIndex == 5 ? "YES" : "NO");
}
