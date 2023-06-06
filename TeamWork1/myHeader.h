#pragma once
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define N 1000
#ifndef NOELEM
#define NOELEM -1
#endif
#ifndef FALSE
#define FALSE 0
#endif
#ifndef TRUE
#define TRUE 1
#endif
//*************************************************/zyq
//1.在字符串str中查找c的个数，并返回给主函数。//show function of djw
//int find1(char str[], char c)
//{
//	int count = 0;
//	for (int i = 0; i < 30; i++)
//		if (str[i] == 'c') count++;
//	return (count);
//}
int find1(char str[], char c)
{
	int i, k = 0;
	for (i = 0; str[i] != '\0'; i++)
		if (str[i] == c)
			k++;
	return k;
}
//2.在字符串str中删除指定字符c。并在主函数中调用
void del(char str[], char c) 
{
	int i, j = 0;
	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != c)
			str2[j++] = str[i];
	str2[j] = '\0';


}

//3.用冒泡排序和改进的选择排序算法给数组排序。并在主函数中调用
void sort(int a[], int n) 
{
	int i, j, t;
	for (j = 0; j < n; j++)
		for (i = 0; i < n - j; i++)
			if (a[i] > a[i + 1])
			{
				t = a[i]; a[i] = a[i + 1]; a[i + 1] = t;
			}
}
//3.用冒泡排序和改进的选择排序算法给数组排序。并在主函数中调用
void sort(int str[], int n) 
{
	int left = 0;
	int right = n - 1;
	while (left < right)
	{

		int min = left;
		int max = right;
		for (int i = left; i <= right; i++) {

			if (str[i] < str[min])
				min = i;
			if (str[i] > str[max])
				max = i;
		}

		int t = str[max];
		str[max] = str[right];
		str[right] = t;
		if (min == right)
			min = max;

		t = str[min];
		str[min] = str[left];
		str[left] = t;
		left++;
		right--;
	}
}
//*******************************************************//fjy
//4.在字符串str中查找字母（大小写字母）的个数，并返回给主函数
void func3()
{
	char str[N];
	int i, lower = 0, upper = 0, digit = 0, space = 0;
	long others = 0;
	printf("请输入一串字符串:");
	gets_s(str);
	for (i = 0;str[i] != '\0';i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			lower++;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			upper++;
	}
	printf("小写字母个数为:%d\n", lower);

	printf("大写字母个数为:%d\n", upper);
}
//int main()
//{
//	while (1)
//	{
//		func3();
//		printf("\n");
//	}
//	return 0;
//}
// 5.求一个N*N矩阵的主对角线的和，并将结果返回给主函数
int fun1() {
	int n;
	printf("输入矩阵维数\n");
	scanf("%d", &n);
	int a[N][N];
	int i, j, m = 0, k = 0;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (i == j)
				m += a[i][j];
	printf("主对角线之和：%d\n", m);
	return 0;
}
//*******************************************************//cjb
//6.写函数int fun2( int  x[][N]) 功能是求一个N*N矩阵的副对角线的和，并将结果返回给主函数。
void input(int x[N][N], int n)
{
	int i, j;
	for (i = 0;i < n;i++)
		for (j = 0;j < n;j++)
			scanf("%d", &x[i][j]);
}
int fun2(int x[N][N], int n)
{
	int i, j, sum = 0;
	for (i = 0;i < n;i++)
		for (j = 0;j < n;j++)
			if (i + j == n - 1)
				sum = sum + x[i][j];
	return sum;
}
//7.写一个函数int mypow(int x,int y)  完成计算x的y次方的值并返回。
int mypow(int x, int y)
{
	int i;
	int j = 1;
	for (i = 0;i < y;i++)
	{
		j = j * x;
	}
	return j;
}

//*******************************************************//wxj
// 8.判断一个数是否是素数，如果是，返回1，否则返回0
int fun3()
{
	int i, j, n;
	printf("Please input numbers: ");
	scanf("%d", &n);
	j = (int)sqrt(n);
	for (i = 2;i <= j;i++)
	{
		if (n % i == 0)
		{
			break;
		}
	}
	if (j < i)
	{
		printf("%d is prime!\n", n);
	}
	else
	{
		printf("%d is not prime!\n", n);
	}
	return 0;
}
// 9.写一个函数long fac(int n)，完成n!=n*(n-1)*...3*2*1（用循环和递归2种方法）
long fac(int n)
{
	if (n > 1)
		return n * fac(n - 1);
	return 1;
}
//*******************************************************//lqx
//10.写一个函数int array_max(int a[],int n)  ，完成在一维数组中求最大值。
int array_max(int a[], int n) { //求一维数组的最大值
	int i, max = a[0];
	for (i = n - 1; i >= 0; --i) {
		if (a[i] > max) max = a[i];
	}
	return max;
}
//11.完成在一维数组中顺序查找某个数，找到返回其下标值，没有找到返回-1
int find(int a[], int n, int x) { //顺序查找
	int i = 0;
	for (i = 0; i < n; ++i) if (a[i] == x) return i;
	return NOELEM; //没有找到元素
}
//12. 写一个函数int gcd(int m, int n)，用辗转相除法求两个正整数m, n的最大公约数，返回最大公约数。
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

//int prime_num(int n) { //是否是素数
//	int i;
//	for (i = 1; i < n; ++i) {
//		if (n % i == 0) return FALSE;
//	}
//	return TRUE;
//}
//
//int prime_num2(int n) { //是否是素数
//	int i;
//	for (i = 1; i < sqrt(n); i += 2) {
//		if (n % i == 0) return FALSE;
//	}
//	return TRUE;
//}
//*******************************************************//djw
// 13. 写一个函数int find_brrary(int a[],int n,int x)，用二分法在数组中查找某个数，找到返回其下标值，没有找到返回-1。
int find_brrary(int a[], int n, int x)
{
	zs = sizeof(a);int right, left, mid;
	left = 0;
	light = zs - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < x)
		{
			left = mid + 1;//a[mid]<x,说明下标mid在x下标的左边，那么下一次查找应该在mid右边开始查，所以mid+1
		}
		else if (arr[mid] > x)
		{
			right = mid - 1;//a[mid]>x,说明下标mid在x下标的右边，那么下一次查找应该在mid左边开始查，所以mid-1
		}
		else//mid=x时候
		{
			return mid;
			break;//这里因为while条件是left<=right，当恰巧找到的最后一个数是要找的数，left=right=（left+right）/2=mid，这是会while一直循环下去,找到后要break跳出循环
		}
	}
	if (left > right)
		return -1;
}
//14. 写一个函数void  myprint(int a[], int n)，完成一维数组的输出。
void my print(int a[], int n)
{
	for (int i;i < n;i++)
		printf("%d", a[i]);
}
//*******************************************************//
