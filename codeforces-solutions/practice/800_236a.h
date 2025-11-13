#pragma once

#include <iostream>
#include <print>
#include <set>
#include <string>

using namespace std;

void solve_236a() {
	string name;
	cin >> name;

	set<char> letters(name.begin(), name.end());

	println("{}", (letters.size() % 2) ? "IGNORE HIM!" : "CHAT WITH HER!");
}
