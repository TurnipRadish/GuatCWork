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
    if (t1 > t2) return 1;
    else if (t1 == t2) return 0;
    else return -1;
}

int more(int a, int b) {
    if (a > b) return a;
    return b;
}

int less(int a, int b) {
    if (a < b) return a;
    return b;
}

int inr2(int x3, int y3, int x4, int y4, int x1, int y1, int x2, int y2) {
    int ox = less(more(x3, x4), more(x1, x2)) - more(less(x3, x4), less(x1, x2));
    int ty1 = less(more(y3, y4), more(y1, y2));
    int ty2 = more(less(y3, y4), less(y1, y2));
    int oy = ty1 - ty2;
    if (ox <= 0 || oy <= 0) return 0;
    else return ox * oy;
}

int inr3(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5, int x6, int y6) {

    int ox = less(more(x5, x6), more(x3, x4)) - more(less(x5, x6), less(x3, x4));
    int oy = less(more(y5, y6), more(y3, y4)) - more(less(y5, y6), less(y3, y4));
    if (ox <= 0 || oy <= 0) return 0;
    else {
        int ox = less(less(more(x5, x6), more(x3, x4)), more(x1, x2)) - more(more(less(x5, x6), less(x3, x4)), less(x1, x2));
        int oy = less(less(more(y5, y6), more(y3, y4)), more(y1, y2)) - more(more(less(y5, y6), less(y3, y4)), less(y1, y2));
        if (ox <= 0 || oy <= 0) return 0;
        else return ox * oy;
    }
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
        int inr2_area1 = inr2(x3, y3, x4, y4, x1, y1, x2, y2);
        int inr2_area2 = inr2(x5, y5, x6, y6, x1, y1, x2, y2);
        int inr3_area = inr3(x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6);
        res = s - inr2_area1 - inr2_area2 + inr3_area;
        data[i] = res;
    }
    for (i = 0; i < n; ++i) printf("%d\n", data[i]);
    return 0;
}
/**********End**********/






