#include <bits/stdc++.h>
using namespace std;

const int N = 100005;

vector<int> adj[N];
bool visited[N];
int parent[N];

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                parent[v] = u;
                q.push(v);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int x;
            cin >> x;
            if (x == 1) {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            cnt++;
            bfs(i);
        }
    }
    if (cnt > 1) {
        cout << "Do thi khong lien thong\n";
    } 
	else {
        for (int i = 1; i <= n; i++) {
            visited[i] = false;
            parent[i] = 0;
        }
        bfs(1);
        for (int i = 2; i <= n; i++) {
            cout << parent[i] << " " << i << "\n";
        }
    }
    return 0;
}



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
1 3
1 4
3 5
5 6
5 7
5 8
5 9
9 10
10 11
10 12
10 13

*/

