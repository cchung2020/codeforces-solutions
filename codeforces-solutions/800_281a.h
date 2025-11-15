#pragma once

#include <iostream>
#include <print>
#include <string>

using namespace std;

void solve_281a() {
	string word;
	cin >> word;

	word[0] = toupper(word[0]);
	println("{}", word);
}

