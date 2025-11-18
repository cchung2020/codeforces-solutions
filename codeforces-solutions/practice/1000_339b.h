#include <iostream>
#include <print>
#include <map>

using namespace std;

void solve_339b() {
	int n, task_count;
	cin >> n >> task_count;

	map<int, int> houseTask;
	for (int i = 0; i < task_count; i++) {
		int task;
		cin >> task;
		houseTask[i] = task - 1;
	}

	long long int loops = 0;
	long long int current_house = 0;

	for (auto [task, house] : houseTask) {
		if (house < current_house) {
			loops++;
		}

		current_house = house;
	}

	println("{}", (loops * n) + current_house);
}
