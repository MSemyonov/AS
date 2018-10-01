#include "stdafx.h"
#include <iostream>
#include <array>
using namespace std;

const int num = 10;
array <int, num> mas{};

void func() {
	int i;
	for (i = 0; i < num; i++) {
		if ((mas[i] % 2) == 0) mas[i] = mas[i] * 2;
		else mas[i] = mas[i] - 1;
		cout << mas[i] << ' ';
	}
}

int main() {
	int i;
	for (i = 0; i < num; i++) {
		mas[i] = i;
		cout << mas[i] << ' ' << endl;
	}

	func();

	cin >> i;
	return 0;
}