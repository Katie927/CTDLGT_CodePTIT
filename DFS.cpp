#include <bits/stdc++.h>

using namespace std;

int n;
vector <int> f;
// int f[n + 1] = {};
vector <vector <int>> a;
// int a[n + 1][n + 1] = {};

void DFS(int i){
    stack <int> s;
    s.push(i);
    f[i] = 1;
    cout << i << " ";
    while(!s.empty()){
        int u = s.top();
        s.pop();
        for(int v = 1;v <= n;v++){ 
            if(a[u][v] == 1 && f[v] == 0){
                cout << v << " ";
                s.push(u);
                s.push(v);
                f[v] = 1;
                break;
            }
        }
    }
}

int main(){
    cin >> n;
    // nếu dùng mảng 2 chiều thì không dùng 2 dòng này
    f.resize(n + 1,0);
    a.resize(n + 1,vector <int> (n + 1,0));
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            cin >> a[i][j];
        }
    }
    DFS(1);
}