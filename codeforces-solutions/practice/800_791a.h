#pragma once

#include <iostream>
#include <print>

using namespace std;

void solve_791a() {
	int a, b;
	cin >> a >> b;

	int years = 0;

	while (a <= b)
	{
		a *= 3;
		b *= 2;
		years++;
	}

	println("{}", years);
}

