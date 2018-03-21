#pragma once

#include <vector>


int sum(const std::vector<int> & v) {
	int sum = 0;

	/*for (int a : v) {
		sum += a;
	}*/
	std::vector<int>::const_iterator iter = v.begin();

	for (iter = v.begin(); iter != v.end(); ++iter) {
		sum += *iter;
	}

	return sum;
}



