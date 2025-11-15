#pragma once

#include <iostream>
#include <print>

using namespace std;

void solve_69a() {
	int x = 0, y = 0, z = 0;
	int xF, yF, zF;
	int count;

	cin >> count;

	for (int i = 0; i < count; i++) {
		cin >> xF >> yF >> zF;

		x += xF;
		y += yF;
		z += zF;
	}

	if (x == 0 && y == 0 && z == 0) {
		println("YES");
	}
	else {
		println("NO");
	}
}
