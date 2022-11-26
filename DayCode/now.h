#include <stdio.h>
#include <math.h>
int xin(int x, int x1, int x2) {
	if (x > x1 && x < x2) return 1;
	return 0;
}

int w2_36() {
	int x1, x2, x3, x4, x5, x6;
	int y1, y2, y3, y4, y5, y6;
	scanf_s("%d%d%d%d%d%d%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4, &x5, &y5, &x6, &y6);

	int dx1 = 0;
	int dx2 = 0;
	if (xin(x3, x1, x2)) {
		dx1 = abs(x3 - x2);
	}
	if (xin(x4, x1, x2)) {
		dx2 = abs(x4 - x1);
	}
	int dx = dx1 + dx2
	return 0;
}