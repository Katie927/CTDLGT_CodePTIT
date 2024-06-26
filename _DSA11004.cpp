#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

struct node {
	int data;
	node* pLeft;
	node* pRight;
	node(int x) {
		this->data = x;
		pLeft = pRight = NULL;
	}
};
typedef node* tree;


void add_Node(tree& T, int u, int v, char c) {
	if (T == NULL) {
		T = new node(u);
		node* p = new node(v);
		if (c == 'L')T->pLeft = p;
		else T->pRight = p;
	}
	else {
		if (T->data == u) {
			node* p = new node(v);
			if (c == 'L')T->pLeft = p;
			else T->pRight = p;
		}
		else {
			if (T->pLeft != NULL)add_Node(T->pLeft, u, v, c);
			if (T->pRight != NULL)add_Node(T->pRight, u, v, c);
		}
	}
}

void Load(tree T) {
	queue<tree> X;
	X.push(T);
	while (X.size()) {
		tree tmp = X.front();
		X.pop();
		cout << tmp->data << " ";
		if (tmp->pLeft != NULL)X.push(tmp->pLeft);
		if (tmp->pRight != NULL)X.push(tmp->pRight);
	}
}

void Dost()
{
    int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		tree T = NULL;
		for (int i = 0; i < n; i++) {
			int u, v;
			char c;
			cin >> u >> v >> c;
			add_Node(T, u, v, c);
		}
		Load(T);
		cout << endl;
	}
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}