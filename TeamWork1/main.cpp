#include <stdio.h>
#include <math.h>
#ifndef NOELEM
#define NOELEM -1
#endif
#ifndef FALSE
#define FALSE 0
#endif
#ifndef TRUE
#define TRUE 1
#endif

int array_max(int a[], int n) { //求一维数组的最大值
	int i, max = a[0];
	for (i = n - 1; i >= 0; --i) {
		if (a[i] > max) max = a[i];
	}
	return max;
}

int find(int a[], int n, int x) { //顺序查找
	int i = 0;
	for (i = 0; i < n; ++i) if (a[i] == x) return i;
	return NOELEM; //没有找到元素
}

int gcd(int m, int n) { //辗转相除法，找最大公约数
	int r = m % n;
	while (r) {
		m = n;
		n = r;
		r = m % n;
	}
	return n;
}

int gcd2(int a, int b) { //辗转相除法求最大公约数 
	if (a % b == 0) return b;
	return gcd2(b, a % b);
}

int prime_num(int n) { //是否是素数
	int i;
	for (i = 1; i < n; ++i) {
		if (n % i == 0) return FALSE;
	}
	return TRUE;
}

int prime_num2(int n) { //是否是素数
	int i;
	for (i = 1; i < sqrt(n); i += 2) {
		if (n % i == 0) return FALSE;
	}
	return TRUE;
}

int main() {
	//int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int len = 10;
	int n = 3;
	int m = 329;
	printf("%d", prime_num2(n));

	return 0;
}