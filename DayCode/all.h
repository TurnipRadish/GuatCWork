#pragma once
#include <stdio.h>
#include <string.h>
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