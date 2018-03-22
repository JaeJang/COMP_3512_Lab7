#pragma once

#include <vector>

//Get sum of elements in vector
//PRE	: vector size > 0
//POST	: NULL
//RETURN: sum of elements 
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

//Get maximum value in vector
//PRE	: vector size > 0
//POST	: NULL
//REUTNR: maximum number
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

//Get minimum value in vector
//PRE	: vector size > 0
//POST	: NULL
//REUTNR: minimum number
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

//Get average value of vector
//PRE	: vector size > 0
//POST	: NULL
//REUTNR: average
double average(const std::vector<int> & v) {
	double average = 0.0;

	std::vector<int>::const_iterator iter = v.begin();

	for (iter = v.begin(); iter != v.end(); ++iter) {
		average += *iter;
	}

	average /= v.size();

	return average;
}

