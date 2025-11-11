#pragma once 

#include <print>
#include <string>
#include <iostream>

using namespace std;

void solve_231a() {
	int problems = 0;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int p, v, t;
		cin >> p >> v >> t;

		if (p + v + t >= 2) {
			problems++;
		}
	}

	println("{}", problems);
}
