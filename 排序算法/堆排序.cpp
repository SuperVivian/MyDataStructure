#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

int arr[10] = { 1,3,2,5,6 };
int len = 5;

//header
void upAdjust(int start, int end);
void CreateHeap();
void deleteTop();
void insert(int x);
void upAdjust(int start, int end);
void downAdjust(int start, int end);
void heap_sort(int arr[]);


void CreateHeap() {
	for (int i = len / 2 - 1; i >= 0; i--) {
		downAdjust(i, len - 1);
	}
}

void deleteTop() {
	arr[0] = arr[len - 1];
	downAdjust(0,len-1);
}

void insert(int x) {
	arr[len++] = x;
	upAdjust(0,len-1);
}

//与此节点的父节点进行比较
void upAdjust(int start,int end) {
	int me = end;
	int parent = me / 2 - 1;
	while (parent >= 0) {
		if (arr[parent] < arr[me]) {
			swap(arr[parent], arr[me]);
			me = parent;
			parent = me / 2 - 1;
		}
		else break;
	}
}

//与此节点的左孩子和右孩子进行比较
void downAdjust(int start,int end) {
	int dad = start;
	int son = dad * 2 + 1;
	while (son <= end) {
		if (son + 1 <= end && arr[son + 1] > arr[son])
			son++;
		if (arr[son] > arr[dad]) {
			swap(arr[son], arr[dad]);
			dad = son;
			son = dad*2 + 1;
		}
		else break;
	}
}

void heap_sort(int arr[]) {
	//创建堆
	//只要满足：根是最大值即可
	//完全二叉树中，叶子节点个数为n/2
	//从第1个非叶子节点开始，逐个向上遍历
	//每个非叶子节点调整它的子树
	CreateHeap();
	//堆排序：递增
	//建完堆后，取出堆顶元素放到最后
	//再次从0号开始向下调整
	for (int i = len - 1; i >= 1; i--) {
		swap(arr[0],arr[i]);
		downAdjust(0, i - 1);
	}
}

//int main()
//{
//	//【完全二叉树】存储结构
//	//根节点：(i-1)/2
//	//左孩子：i*2+1
//	//右孩子：i*2+2
//	heap_sort(arr);
//	for (int i = 0; i < len; i++) {
//		cout << arr[i] << " ";
//	}
//}
