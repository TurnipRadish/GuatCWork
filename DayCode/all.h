#pragma once
#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX_N (30)
int char_pos1[MAX_N], char_pos2[MAX_N];
int char_cnt[MAX_N];

void find(char s[], int len, int key, int count) {
    int i = 0;
    for (i = 0; i < len; ++i) {
        if (s[i] == key) {
            printf("%d ", i + 1); //
            if (--count <= 0) break;
        }
    }

}

char aly(const char s[], const int len, int repeat) {
    int i = 0; int count = 0; int j = 0; //
    for (i = 0; i < len; ++i) {//
        count = 0;//
        for (j = 0; j < len; ++j) {
            if (s[j] == s[i]) count++;
            if (count >= repeat) return s[i];
        }
    }
    return 0;
}
/*******************************************************************************/
int w2_15()
{
    /**********Begin**********/
    int i = 0; int j = 0;
    int count = 0;
    char target_c = 0;
    char s[100] = {};
    scanf_s("%s", s, 100);

    int len = strlen(s);
    target_c = aly(s, len, 3);//

    printf("%c ", target_c); //
    find(s, len, target_c, 3);
    return 0;

    /**********End**********/
}
/*******************************************************************************/
int get_col(char s[], int len) {
    int i; int n = 0;
    for (i = 0; i < len; ++i) {
        n = s[i] - 'A' + 1;
        n += (len - 1) * 26;
    }
    return n;
}

int w2_16()
{
    /**********Begin**********/
    char s[100] = {};
    scanf_s("%s", s, 100);

    int len = strlen(s);
    int n = 0;
    n = get_col(s, len);
    printf("%d", n);
    /**********End**********/
}
/*******************************************************************************/
#include <stdio.h>
#include <string.h>

int cave(int a[], int count, int begin, int step) {
    int now = begin;
    int i;
    for (i = 1; i <= step; ++i) {
        if (i + now > count) now = ((i + now) % count);
        else now += i;
        a[now] = 1;
    }
    return now;
}

void w2_17() {
    int a[100] = {};
    a[10] = 1;
    printf("%d\n", cave(a, 10, 10, 1000));
    int i;
    for (i = 1; i <= 10; ++i)
        if (a[i] == 0) printf("%d ", i);
}
/*******************************************************************************/
void drift(int a[], int len, int n) {
    int i;
    int b[100] = {};
    for (i = 0; i < len; ++i) {
        b[(i + n) % len] = a[i];
    }
    for (i = 0; i < len; ++i) {
        a[i] = b[i];
    }
}

void w2_18() {
    int a[] = { 1,2,3,4,5,6 };
    int len = 6;
    drift(a, len, 2);
    int i;
    for (i = 0; i < len; ++i) printf("%d ", a[i]);
}
/*******************************************************************************/
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
            inven[k++] = a[i]; back++;
        }
        else {
            inven[ix++] = a[i];
            if (ix == n) ix = 0;
            inven[0] = a[i]; back++;
        }
    }
    printf("%d", back);
}
/*******************************************************************************/
void w2_21() {
    int n, a[1000] = {};
    int r = 0;
    int i; int j;
    int c = 0; int k = 0;
    scanf_s("%d", &n);
    for (i = 0; i < n; ++i) scanf_s("%d", a + i);

    for (i = 0; i < n; ++i) {
        for (j = i; j < n; ++j) {
            if (j == i) continue;
            r = a[j] + a[i];
            for (k = 0; k < n; ++k) {
                if (a[k] == r) c++;
            }
        }
    }
    printf("%d", c);
}

/*******************************************************************************/
long long prime[10000000];    //保存筛得的质数
int mark[10000001] = { 0 }; //若mark[x]为1，则表示该数x被标记成非质数

int is_prime1(int x) { //e5
    int i;
    for (i = 2; i <= x - 1; ++i) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int is_prime2(int x) { // e6
    int i;
    for (i = 2; i <= sqrt(x); ++i) {
        if (x % i == 0) return 0;
    }
    return 1;
}

void w2_22()
{
    /**********Begin**********/
    int n;
    scanf_s("%d", &n);
    int i;
    for (i = 2; i <= n; ++i) {
        if (is_prime2(i)) printf("%d ", i);
    }
    /**********End**********/
}

void w2_22_2()
{
    /**********Begin**********/
    int n;
    scanf_s("%d", &n);
    //printf("+");
    int i; int k = 0; int j = 0;
    for (i = 2; i <= n; ++i) {
        int flag = 1;
        if (mark[i] != 1) {
            for (j = 2; j <= (int)sqrt((double)i); ++j) {
                if ((mark[j] != 1) && ((i % j) == 0)) {
                    flag = 0; break;
                }
            }
            if (flag == 1) prime[k++] = i;
            else mark[i] = 1;
        }
        //if (i > 3 && mark[i] % 2 == 0) mark[i] = 1;
    }

    for (i = 0; i < k; ++i) printf("%lld ", prime[i]);
    /**********End**********/
}

void w2_22_3()
{
    /**********Begin**********/
    int n;
    scanf_s("%d", &n);
    //printf("+");
    int i; int k = 0; int j = 0;
    for (i = 2; i < sqrt(n); ++i) {
        if (mark[i] == 0) {
            j = 2;
            while (j * i <= n) {
                mark[i * j] = 1;
                j++;
            }
        }
    }
    for (i = 2; i < n; ++i) {
        if (mark[i] == 0) printf("%d ", i);
    }
    //for (i = 2; i < k; ++i) printf("%lld ", prime[i]);

    /**********End**********/
}
/*******************************************************************************/
int gohand(char s[], int n) {
    int i; int c = 0;
    for (i = 0; i < n; ++i) {
        if (s[i] == '0') s[i] = '1';
        else if (s[i] == '1') s[i] = '0';
        if (i == 0) c = s[i];
    }
    s[n - 1] += 1;
    for (i = n - 1; i >= 1; --i) {
        if (s[i] >= '2') {
            s[i - 1] += 1;
            s[i] = '0';
        }
    }
    if (s[0] != (char)c) {
        return 0;
    }
    return 1;
}
void w2_23()
{
    /**********Begin**********/
    char s[10][200] = {};
    int n, i = 0; int k = 0;
    while (scanf_s("%s", s[i++], 200) != EOF) {

        k++;
    }

    for (i = 0; i < k; ++i) {
        n = strlen(s[i]);
        if (gohand(s[i], n)) printf("%s", s[i]);
        else printf("Overflow!");
        printf("\n");
    }
    /**********End**********/
}
/*******************************************************************************/
int m[100][100] = {};
void w2_24() {
    int n;
    scanf_s("%d", &n);

    int x = 0, y = 0;
    int counter = 1;
    int i = 0; int j = 0;
    //int max = 0;
    //pos test;
    int mode = 1;
    int step, k = 0;
    while (counter <= n * n) {
        step = n - k * 2 - 1;
        y = k;
        x = n - 1 - k;
        if (step == 0) {
            m[y][x] = counter;
            break;
        }
        for (i = step; i > 0; --i) {
            m[y][x] = counter++;
            y++;
        }
        //down

        for (i = step; i > 0; --i) {
            m[y][x] = counter++;
            x--;
        }
        //left

        for (i = step; i > 0; --i) {
            m[y][x] = counter++;
            y--;
        }
        //up

        for (i = step; i > 0; --i) {
            m[y][x] = counter++;
            x++;
        }
        //right


        k++;
    }
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

}
/*******************************************************************************/
void Rua();
int w2_25() {
    Rua();//调用递归函数
    return 0;
}
void Rua() {
    /**********Begin**********/
    int i = 0; int x = 0;
    if (~scanf_s("%d", &x)) {
        Rua();
        printf("%d\n", x);
    }
    return;
    /**********End**********/
}

/*******************************************************************************/
int is_leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) return 1;
    return 0;
}
int getWeek(int day) //20220101
{
    /**********Begin**********/
    int year = day / 10000;
    int leap = 0;
    if (is_leap_year(year)) leap = 1;

    int year_code = (year % 100 / 4 + year % 100) % 7;

    int day_code = day % 100;

    int t = day % 10000 / 100;
    int month_code = 0;
    if (t == 5) month_code = 0;
    else if (t == 8) month_code = 1;
    else if (t == 2 && leap == 1) month_code = 1;
    else if (t == 2 && leap == 0) month_code == 2;
    else if (t == 3 || t == 11) month_code = 2;
    else if (t == 6) month_code = 3;
    else if (t == 9 || t == 12) month_code = 4;
    else if (t == 4 || t == 7) month_code = 5;
    else if (t == 1 && leap == 1) month_code = 5;
    else if (t == 1 && leap == 0) month_code = 6;
    else if (t == 10) month_code = 6;

    int week_code = month_code + year_code + day_code;
    week_code %= 7;
    if (week_code == 0) week_code = 7;
    return week_code;
    /**********End**********/
}

void printWeek(int w)
{
    /**********Begin**********/
    switch (w) {
    case 1: printf("Mon"); break;
    case 2: printf("Tue"); break;
    case 3: printf("Wed"); break;
    case 4: printf("Thu"); break;
    case 5: printf("Fri"); break;
    case 6: printf("Sat"); break;
    case 7: printf("Sun"); break;
    }

    /**********End**********/
}
void w2_26()
{
    int date;
    scanf_s("%d", &date);
    int week = getWeek(date);
    printWeek(week);
}
/*******************************************************************************/


int sim(char a, char b) {
    if ((a >= 'a' && a <= 'z') && (b >= 'a' && b <= 'z')) return 1;
    else if ((a >= 'A' && a <= 'Z') && (b >= 'A' && b <= 'Z')) return 1;
    else if ((a >= '0' && a <= '9') && (b >= '0' && b <= '9')) return 1;
    return 0;

}

int cmps(char a, char b) {
    if (a < b) return 1;
    return 0;
}

int w2_27()
{
    char in[110] = {}, t = 0;
    char out[110] = {};
    int i, len = 1;
    int k = 0;
    scanf_s("%s", in, 110);
    len = strlen(in);
    for (i = 0; i < len;) {
        if (in[i] == '-') {
            if (sim(in[i - 1], in[i + 1]) && cmps(in[i - 1], in[i + 1])) {
                t = in[i - 1] + 1;
                while (t < in[i + 1]) {
                    out[k++] = t++;
                }
                i += 1;
            }
            else {
                out[k++] = in[i++];
            }
        }
        else {
            out[k++] = in[i++];
        }
    }

    printf("%s", out);



    return 0;
}
/*******************************************************************************/
void w2_28() {
    char a[100] = {};
    char b[100] = {};
    scanf_s("%s", a, 100);
    scanf_s("%s", b, 100);

    int i; int j;
    int lena = strlen(a);
    int lenb = strlen(b);
    int k = 0;
    int count = 0;
    for (i = 0; i < lena; ++i) {
        if (a[i] == b[0]) {
            k = 0; int u = 0;
            for (j = i; u < lenb; ++j) {
                if (b[u++] == a[j]) k++;
                else break;
            }
            if (k == lenb) count++;
        }
    }
    printf("%d", count);
}
/*******************************************************************************/
char c;
int digit[10] = { 0 }, upper[26] = { 0 }, lower[26] = { 0 };
int isDigit(char);
int isLower(char);
int isUpper(char);
int w2_29()
{
    int i;
    while (scanf_s("%c", &c, 1) != EOF) {
        if (isDigit(c))
            digit[c - '0']++; // 对应的数字出现的次数加1
        else if (isLower(c))
            lower[c - 'a']++; // 对应的小字字母出现的次数加1
        else if (isUpper(c))
            upper[c - 'A']++; // 对应的大写字母出现的次数加1
    }
    for (i = 0; i < 9; i++)
        printf("%d ", digit[i]);
    printf("\n");
    for (i = 0; i < 26; i++)
        printf("%d ", lower[i]);
    printf("\n");
    for (i = 0; i < 26; i++)
        printf("%d ", upper[i]);
    return 0;
}

/**********Begin**********/
int isDigit(char c) { //判断字符是否为数字

    if (c >= '0' && c <= '9') return 1;
    return 0;

}
int isLower(char c) {  //判断字符是否为小写字母

    if (c >= 'a' && c <= 'z') return 1;
    return 0;

}
int isUpper(char c) { //判断字符是否为大写字母

    if (c >= 'A' && c <= 'Z') return 1;
    return 0;

}

/**********End**********/

/*******************************************************************************/
long long solve(long long n) {
    /*********Begin*********/
    int i; long long res = 1;
    for (i = 1; i <= n; ++i) {
        res *= i;
    }
    return res;
    /*********End**********/
}
int w2_30(void)
{
    long long n;
    scanf_s("%lld", &n);
    long long ans = 0;
    for (long long i = 1;i <= n;i++)
        ans += solve(i);
    printf("%lld", ans);
    return 0;
}
/*******************************************************************************/
void solve(int n) {
    int temp = n % 10;
    /*********Begin*********/
    
    if (n / 10 > 0) solve(n / 10);
    /*********End**********/
    if (n)
        printf(" %d", temp);
    else
        printf("%d", temp);
}
int w2_31(void)
{
    int n;
    scanf_s("%d", &n);
    solve(n);
    return 0;
}

/*******************************************************************************/

