#include <iostream>
#include <string>

int operations(int num1, int num2) {
	int v = num1 % num2;
	int n = v;

	for (int i = 1; i < 4; i ++) {
		v *= n;
	}

	return v;
}
