#pragma once

#include <print>
#include <string>
#include <iostream>

using namespace std;

void solve_71a() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string word;
		cin >> word;

		if (word.length() > 10) {
			println("{}{}{}", word.front(), word.length() - 2, word.back());

		}
		else {
			println("{}", word);
		}
	}

}
