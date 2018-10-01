#include<iostream>

int main() {
	size_t n;
	std::cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++) {
		a[i] = rand();
	}
	for (int i = 0; i < n; i++) {
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
	int max = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	int *b = new int[max];
	for (int i = 0; i < max; i++) {
		b[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		b[a[i]]++;
	}
	for (int i = 0; i < max; i++) {
		for (int j = 1; j <= b[i]; j++) {
			std::cout << i << " ";
		}
	}
	std::cin >> n;
	return 0;
	
}