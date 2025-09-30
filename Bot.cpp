#pragma once
#include <iostream>
#include <cmath>
#include <string>
using std::cout;
using std::cin;
using std::string;

bool me(int yourScore, int myScore, int total) {

	double leadlag = std::floor((static_cast<double>(myScore) - yourScore) / 20.0);
	double oprog = std::floor(static_cast<double>(yourScore) / 22.0);
	double target = 20 - leadlag + oprog;

	if (yourScore >= 95) {
		target += 2;
	}
	else if (yourScore >= 90) {
		target += 1;
	}

	if (target > 25) {
		target = 25;
	}
	else if (target < 10) {
		target = 10;

	}

	if ((100 - myScore) < target) {
		target = 100 - myScore;
	}

	if (total < target) {
		cout << "I will roll again." << std::endl;
		return true;
	}
	else {
		cout << "I hold. Your turn." << std::endl;
		return false;
	}
	


}