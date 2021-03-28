// 图.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<cstring>
using namespace std;


//邻接矩阵
//1.1维存顶点
//2.矩阵存顶点间关系

/*

typedef int VertexType;
typedef int EdgeType;
const int MaxVertexNum = 100;

int vertexNum = 0, edgeNum = 0;

VertexType vertices[MaxVertexNum];
EdgeType arcs[MaxVertexNum][MaxVertexNum];
int visited[MaxVertexNum];

void CreateGraph() {
	int i, j, k;
	//【1】先输入顶点和边的数量
	cin >> vertexNum >> edgeNum;
	//【2】输入每1个顶点
	for (i = 1; i <= vertexNum; i++) {
		cin >> vertices[i];
	}
	//【3】输入每条边：i,j
	memset(arcs,-1,sizeof(arcs));
	for (k = 1; k <= edgeNum; k++) {
		cin >> i >> j;
		arcs[i][j] = 1;
		arcs[j][i] = 1;
	}
}


/*输入数据*/
/*
5 6
1 2 3 4 5 
1 2
1 3
1 4
2 3
3 5
4 5
*/

/*
int main()
{
	CreateGraph();
    std::cout << "Hello World!\n";
}

*/

