// ConsoleApplication5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
void Sort(std::vector<int>&);
int main()
{
	std::vector<int> v;
	for (int y = 0; y < 30; y++) {
		v.push_back(rand());
	}
	for (int i = 0; i < v.size(); i++) {
		std::cout << "v[" << i << "] = " << v[i] << "\n";
	}
	std::cout << "_______________________________________________\n\n";
	Sort(v);

	for (int i = 0; i < v.size(); i++) {
		std::cout << "v[" << i << "] = " << v[i] << "\n";
	}
	system("pause");
    return 0;
}
void Sort(std::vector<int>& vec) {
	int radix = 10;
	bool maxL = false;
	int tmp = 0, placement = 1;

	while (!maxL) {
		maxL = true;
		std::vector<int> buckets[10]; //std::vector<int>

		for (unsigned int i = 0; i < vec.size(); i++) {
			tmp = vec[i] / placement;

			buckets[tmp%radix].push_back(vec[i]);

			if ((maxL) && (tmp > 0)) { maxL = false; }

		}
		int a = 0;
		for (int b = 0; b < radix; b++) {
			std::vector<int> buck = buckets[b];
			for (int i = 0; i < buck.size(); i++) {
				vec[a] = buck[i];
				a += 1;
			}

		}
		placement *= radix;
	}
}

