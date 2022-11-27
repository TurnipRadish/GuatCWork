#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**********Begin**********/
int cmp(const void* a, const void* b) {
    int t1 = (*(int*)a);
    int t2 = (*(int*)b);
    if (t1 < t2) return 1;
    else if (t1 == t2) return 0;
    else return -1;
}

int inr(int x3, int y3, int x4, int y4, int x1, int y1, int x2, int y2) {
    int x[4] = { 0 };
    x[0] = x1; x[1] = x2;
    x[2] = x3; x[3] = x4;
    qsort(x, 4, sizeof(x[0]), cmp);
    int y[5] = { 0 };
    y[0] = y1; y[1] = y2;
    y[2] = y3; y[3] = y4;
    qsort(y, 4, sizeof(y[0]), cmp);
    return abs(x[1] - x[2]) * abs(y[1] - y[2]);
}

int w2_36() {
    int data[100] = {};
    int x1, x2, x3, x4, x5, x6;
    int y1, y2, y3, y4, y5, y6;
    int n = 0;
    int i = 0; 
    int res = 0; int s = 0;
    scanf_s("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf_s("%d%d%d%d%d%d%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4, &x5, &y5, &x6, &y6);
        s = abs(x1 - x2) * abs(y1 - y2);
        res = inr(x3, y3, x4, y4, x1, y1, x2, y2) +
            inr(x5, y5, x6, y6, x1, y1, x2, y2);
        res = s - res;
        data[i] = res;
    }
    for (i = 0; i < n; ++i) printf("%d\n", data[i]);
    return 0;
}
/**********End**********/






