#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
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
		tree p = new node(v);
		if (c == 'L')T->pLeft = p;
		else T->pRight = p;
	}
	else {
		if (T->data == u) {
			tree p = new node(v);
			if (c == 'L')T->pLeft = p;
			else T->pRight = p;
		}
		else {
			if (T->pLeft != NULL)add_Node(T->pLeft, u, v, c);
			if (T->pRight != NULL)add_Node(T->pRight, u, v, c);
		}
	}
}
set<int> X;
void Load(tree T, int count) {
	if (T->pLeft == NULL && T->pRight == NULL) {
		X.insert(count);
	}
	else {
		if (T->pLeft != NULL)Load(T->pLeft, count + 1);
		if (T->pRight != NULL)Load(T->pRight, count + 1);
	}
}

void Dost()
{
    int t;
    cin>>t;
    while (t--) {
		X.clear();
		int n; cin >> n;
		tree T = NULL;
		for (int i = 0; i < n; i++) {
			int u, v;
			char c;
			cin >> u >> v >> c;
			add_Node(T, u, v, c);
		}
		Load(T,0);
		if (X.size() > 1)cout << 0 << endl;
		else cout << 1 << endl;
	}
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}