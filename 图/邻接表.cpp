#include<iostream>
using namespace std;

/*

const int N = 100;//顶点最大数量

struct vnode {
	int val;
	edge* firstEdge;
};

struct edge {
	int adjVertex;
	edge* next;
};

int n, m;//顶点数量，边数量
int visited[N];
vnode g[N];

void CreateGraph() {
	edge* p;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {		
		cin >> g[i].val;
		g[i].firstEdge = NULL;
	}
	for (int k = 0; k < m; k++) {
		int i, j;
		cin >> i >> j;
		p = new edge();
		p->adjVertex = j;
		p->next = g[i].firstEdge;
		g[i].firstEdge = p;
	}
}

*/