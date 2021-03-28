// 排序算法.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

//1.找到中枢元素
//2.左右指针分别同时往中间移动，碰到不符合的就刹住
//3.交换不符合的元素
//4.这样，中枢元素左右两侧的元素就可以了

//再分别对左半边和右半边执行相同的算法

void QuickSort(int a[],int l,int r) {
	if (l >= r)return;
	int x = a[l / 2 + r / 2];
	int i = l - 1, j = r + 1;
	while (i < j) {
		while (a[++i] < x);
		while (a[--j] > x);
		if (i < j)swap(a[i], a[j]);
	}
	QuickSort(a, l, j);
	QuickSort(a, j + 1, r);
}

void QuickSortTest() {
	int a[5] = { 1,2,5,7,2 };
	int n = 5;
	QuickSort(a, 0, n-1);
	for (int x : a) {
		cout << x << " ";
	}
}

int main()
{
	QuickSortTest();
	return 0;
}


