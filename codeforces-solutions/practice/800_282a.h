#pragma once 

#include <print>
#include <string>
#include <iostream>

using namespace std;

void solve_282a() {
	int x = 0;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string statement;
		cin >> statement;

		if (statement.contains("++")) {
			x++;
		}
		else {
			x--;
		}
	}

	println("{}", x);
}
