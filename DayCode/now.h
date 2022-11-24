#include <stdio.h>
#include <string.h>

int find(int a[], int len, int key) {
	int i;
	for (i = 0; i < len; ++i) {
		if (a[i] == key) return i;
	}
	return -1;
}

void w2_19() {
	int a[1000], n, m;
	int inven[100] = {};
	int back = 0;
	scanf_s("%d", &n);
	scanf_s("%d", &m);
	int i;
	for (i = 0; i < m; ++i) {
		scanf_s("%d", a + i);
	}
	int k = 0; int ix = 0;
	for (i = 0; i < m; ++i) {
		if (find(inven, n, a[i]) >= 0) continue;
		if (k < n) {
			inven[k++] = a[i];
		}
		else {
			inven[ix++] = a[i];
			if (ix == n) ix = 0;
			back++;
			inven[0] = a[i]; back++;
		}
	}
	printf("%d", back);
}