/*
Input: 
13
0 1 1 1 0 0 0 0 0 0 0 0 0
1 0 1 1 0 0 0 0 0 0 0 0 0
1 1 0 1 1 0 0 0 0 0 0 0 0
1 1 1 0 0 0 0 0 0 0 0 0 0
0 0 1 0 0 1 1 1 1 0 0 0 0
0 0 0 0 1 0 1 0 1 0 0 0 0
0 0 0 0 1 1 0 1 0 0 0 0 0
0 0 0 0 1 0 1 0 1 0 0 0 0
0 0 0 0 1 1 0 1 0 1 0 0 0
0 0 0 0 0 0 0 0 1 0 1 1 1
0 0 0 0 0 0 0 0 0 1 0 1 1
0 0 0 0 0 0 0 0 0 1 1 0 1
0 0 0 0 0 0 0 0 0 1 1 1 0

Output:
1 2
2 3
3 4
3 5
5 6
6 7
7 8
8 9
9 10
10 11
11 12
12 13
*/

#include<bits/stdc++.h>
using namespace std;
int n, matrix[1001][1001];
bool chuaxet[10000];

void input() {
    cin >> n;
    for (int i = 1; i <= n; i++) chuaxet[i] = false;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) cin >> matrix[i][j];
    }
}
void Tree_DFS(int u){
	vector<vector<int> > vt;
	stack<int> st;
	st.push(u);
    chuaxet[u] = true;
    while(!st.empty())
    {
        int s = st.top();
        st.pop();
        for(int t = 1; t <= n; t++)
        {
            if(chuaxet[t] == false && matrix[s][t] == 1)
            {
				vector<int> v;
				v.push_back(s);
				v.push_back(t);
				vt.push_back(v);
				st.push(s);
				st.push(t);
				chuaxet[t] = true;
                break;
            }
        }
    }
    if(vt.size() < n-1)
        cout << "\nDo thi khong lien thong." << endl;
    else
    {
        for(int i = 0; i < vt.size(); i++)
        {
            for(int j = 0; j < vt[i].size(); j++)
                cout << vt[i][j] << " ";
            cout << endl;
        }
    }
}

int main() {
    input();
    Tree_DFS(1);
    return 0;
}

