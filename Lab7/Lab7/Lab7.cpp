#include <iostream>
#include "functions.hpp"
#include <conio.h>
#include <vector>


using namespace std;

int main() {

	vector<int> v;
	v.push_back(50);
	v.push_back(10);
	v.push_back(5);
	v.push_back(30);
	v.push_back(19);
	v.push_back(19);
	v.push_back(3);

	cout << min(v) << endl;


	cout << "Press any button to exit";
	_getche();
}