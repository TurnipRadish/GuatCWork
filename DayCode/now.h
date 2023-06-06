#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int a[100000];

int main() {
	int opc = 0;
	int sum = 0;
	cin >> opc;
	int ans = 0;
	int k = 0;
	for (int i = 0; i < opc; ++i) {
		int len = 0;
		cin >> len;
		for (int j = 0; j < len; ++j) {
			int temp = 0;
			cin >> temp;
			sum += temp;
		}
		a[k++] = sum - (0 + len) * len / 2;
	}
	for (int i = 0; i < k; ++i) {
		cout << a[k] << " ";
	}
	return 0;
}





