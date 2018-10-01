#include<iostream>
#include<vector>
#include<chrono>

int main() {
	int n;
	std::cin >> n;
	auto start = std::chrono::high_resolution_clock::now();
	std::vector <std::vector<int>> a;
	a.resize(n, std::vector<int> (0));
	int* b = new int[n];
	for (int i = 0; i < n; i++) {
		b[i] = rand() % 100;
	}
	for (int i = 0; i < n; i++) {
		a[b[i] % 10].push_back(b[i]);
	}
	int k = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0, size = a[i].size(); j < size; j++) {
			b[k] = a[i][j];
			k++;
		}
	}
	a.clear();
	a.resize(n, std::vector<int>(0));
		for (int i = 0; i < n; i++) {
			a[b[i] / 10].push_back(b[i]);
		}
		k = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0, size = a[i].size(); j < size; j++){
				b[k] = a[i][j];
				k++;
			}
		}

		auto finish = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> elapsed = finish - start;
		std::cout << elapsed.count();
	std::cin >> n;
	return 0;
}