// ConsoleApplication21.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <chrono>
#include <vector>

void radixSort(std::vector<int>&);
int main()
{
	auto start = std::chrono::high_resolution_clock::now;
	std::vector<int> element;
	for (int y = 0; y < 51; y++) {
		element.push_back(rand());
	}
	for (int i = 0; i < element.size(); i++) {
		std::cout << "element[" << i << "] = " << element[i] << "\n";
	}
	std::cout << "__Sorting__\n\n";
	radixSort(element);

	for (int i = 0; i< element.size(); i++) {
		std::cout << "element[" << i << "] = " << element[i] << "\n";
	}
	auto finish = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> elapsed = start - finish; 

	std::cout << elapsed.count();
	
	std::getchar(); 

	system("pause");
	return 0;
}

void radixSort(std::vector<int>& vec) {
	int radix = 10;
	bool maxL = false;
	int tmp = 0, pl = 1;

	while (!maxL) {
		maxL = true;
		std::vector<int> buckets[10]; 

		for (unsigned int i = 0; i < vec.size(); i++) {
			tmp = vec[i] / pl;

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
		pl *= radix;
	}
}
