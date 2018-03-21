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

int max(const std::vector<int> & v) {
	int max = v[0];

	std::vector<int>::const_iterator iter = v.begin();

	for (iter = v.begin() +1 ; iter != v.end(); ++iter) {
		if (max < *iter) {
			max = *iter;
		}
	}

	/*for (int a : v) {
		if (a > max) {
			max = a;
		}
	}*/
	return max;
}

int min(const std::vector<int> & v) {
	int min = v[0];

	std::vector<int>::const_iterator iter = v.begin();

	for (iter = v.begin(); iter != v.end(); ++iter) {
		if (min > *iter) {
			min = *iter;
		}
	}

	return min;
}

