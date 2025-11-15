#pragma once

#include <iostream>
#include <string>
#include <print>
#include <set>

using namespace std;

void solve_118a() {
	string word;
	set<char> vowels = { 'a', 'e', 'i', 'o', 'u', 'y' };

	cin >> word;

	for (char c : word) {
		c = tolower(c);
		if (!vowels.contains(c)) {
			print(".{}", c);
		}
	}
}

