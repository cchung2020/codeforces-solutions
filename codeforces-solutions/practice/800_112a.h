#pragma once

#include <iostream>
#include <print>
#include <string>
#include <algorithm>
#include <ranges>
#include <compare>
#include <cctype>

using namespace std;

void solve_112a() {
	string w1, w2;
	cin >> w1 >> w2;
	ranges::transform(w1, w1.begin(), ::tolower);
	ranges::transform(w2, w2.begin(), ::tolower);

	if (w1 < w2) {
		println("-1");
	}
	else if (w1 == w2) {
		println("0");
	}
	else {
		println("1");
	}
}

