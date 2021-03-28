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

//��˽ڵ�ĸ��ڵ���бȽ�
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

//��˽ڵ�����Ӻ��Һ��ӽ��бȽ�
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
	//������
	//ֻҪ���㣺�������ֵ����
	//��ȫ�������У�Ҷ�ӽڵ����Ϊn/2
	//�ӵ�1����Ҷ�ӽڵ㿪ʼ��������ϱ���
	//ÿ����Ҷ�ӽڵ������������
	CreateHeap();
	//�����򣺵���
	//����Ѻ�ȡ���Ѷ�Ԫ�طŵ����
	//�ٴδ�0�ſ�ʼ���µ���
	for (int i = len - 1; i >= 1; i--) {
		swap(arr[0],arr[i]);
		downAdjust(0, i - 1);
	}
}

//int main()
//{
//	//����ȫ���������洢�ṹ
//	//���ڵ㣺(i-1)/2
//	//���ӣ�i*2+1
//	//�Һ��ӣ�i*2+2
//	heap_sort(arr);
//	for (int i = 0; i < len; i++) {
//		cout << arr[i] << " ";
//	}
//}
