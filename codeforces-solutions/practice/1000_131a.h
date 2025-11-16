#pragma once

#include <iostream>
#include <print>
#include <string>
#include <algorithm>
#include <ranges>

using namespace std;
using std::ranges::views::drop;

void solve_131a() {
	string word;
	cin >> word;

	if (ranges::all_of(word | drop(1), ::isupper)) {
		word[0] = toupper(word[0]);
		ranges::transform(word | drop(1), word.begin() + 1, ::tolower);
	}

	println("{}", word);
}
