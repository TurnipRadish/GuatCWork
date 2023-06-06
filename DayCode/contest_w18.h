#pragma once
//#include <bits/stdc++.h>
#include <iostream>
#define E6 1000000
#define E5 100000

namespace C {
	int a[E6] = {};

	void trs(int* num) {
		if (*num) *num = 0;
		else *num = 1;
	}

	int count_couple(int a[], const int len) {
		int counter = 0;
		for (int i = 0; i < len - 1; ++i) {
			if (a[i] != 1) continue;
			for (int j = i + 1; j < len; ++j) {
				if (a[j] == 0) counter++;
			}
		}
		return counter;
	}

	int main_v() {
		int n = 0;

		std::cin >> n;
		for (int i = 0;i < n; ++i) std::cin >> a[i];

		int max_c = 0;
		for (int i = 0; i < n; ++i) {
			trs(a + i);
			int c = count_couple(a, n);
			if (c > max_c) max_c = c;
			trs(a + i);
		}

		std::cout << max_c;
		return 0;
	}
}

namespace D {
	int a[E6] = {};
	int input_i[E5] = {};
	int ans_a[E5] = {};

	int handle(int a[], int len) {
		int res = 0;
		int i = 0;
		if (len == 1) return a[0];
		for (i = 0; i <= len - 2; i += 2) {
			res += a[i] * a[i + 1];
		}
		if (i == len - 1) res += a[i];
		return res;
	}

	int main_v() {
		
		int n, t;
		std::cin >> n >> t; // n:number count // t:test count
		for (int i = 0; i < n; ++i) std::cin >> a[i]; // input a[]
		for (int i = 0; i < t; ++i) std::cin >> input_i[i]; // input the test data when begin a test

		for (int i = 0; i < t; ++i) {
			int temp = a[input_i[i]];
			a[input_i[i]] = 1;
			ans_a[i] = handle(a, n);
			a[input_i[i]] = temp;
		}

		for (int i = 0; i < t; ++i) {
			std::cout << ans_a[i] << "\n";
		}
		/*int test[10] = { 1,1,1,1,1,1,1,1,1,1 };
		int res = handle(test, 10);
		std::cout << res;*/
		return 0;
	}
}


