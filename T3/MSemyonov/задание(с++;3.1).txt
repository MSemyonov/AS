#include<iostream>
#include<chrono>
#include<array>


int main() {
	std::size_t n;
	std::cin >> n;
	auto start = std::chrono::high_resolution_clock::now();
	int* a = new int[n];
	for (size_t i = 0; i < n; i++) {
		a[i] = rand();
	}
	int temp;
	for (size_t i = 0; i < n; i++) {
		for (size_t j = i; j > 0 && a[j - 1] > a[j]; j--) {
			temp = a[j - 1];
			a[j - 1] = a[j];
			a[j] = a[j - 1];
		}
	}
	auto finish = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> elapsed = finish - start;
	std::cout << elapsed.count();
	std::cin >> temp;
	return 0;
}