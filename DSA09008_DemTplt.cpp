// 4
// 5 6 
// 1 2 1 3 2 3 3 4 3 5 4 5
// 4 2
// 1 2 3 4
// 7 5
// 1 2 1 3 2 3 4 5 6 7
// 5 6 
// 1 2 1 3 2 3 3 4 3 5 4 5

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<stack>

using namespace std;

vector<int> check;
vector<vector<int>> vec;

void DFS_lt(int u, int V){
    stack<int> tmp;
    int tplt = 1;
    tmp.push(u);
    check[u] = 1;
    while(!tmp.empty()){
        int x = tmp.top();
        tmp.pop();
        for(int i=1 ; i<=V ; i++){
            if(vec[x][i] == 1 && check[i] == 0){
                tmp.push(x);
                tmp.push(i);
                check[i] = 1;
                break;
            }
        }
        if(tmp.empty()){
            for(int i=1 ; i<=V ; i++){
                if(check[i] == 0){
                    tmp.push(i);
                    tplt++;
                    break;
                }
            }
        }
    }
    cout<<tplt<<endl;
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int V, E;
        cin>>V>>E;
        check.assign(V+1, 0);
        vec.assign(V+1, vector<int> (V+1, 0));
        for(int i=1 ; i<=E ; i++){
            int x, y;
            cin>>x>>y;
            vec[x][y] = 1;
            vec[y][x] = 1;
        }
        DFS_lt(1, V);
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}

// #include<iostream>
// #include<algorithm>
// #include<string.h>
// #include<queue>
// using namespace std;
// vector<int> A[1001];
// bool check[1001];
// void reset() {
// 	for (int i = 0; i < 1001; i++)A[i].clear();
// 	memset(check, false, sizeof(check));
// }
// void DFS(int u) {
// 	check[u] = true;
// 	for (auto x : A[u]) {
// 		if (!check[x])DFS(x);
// 	}
// }
// int main() {
// 	int t; cin >> t;
// 	while (t--) {
// 		reset();
// 		int m, n; cin >> m >> n;
// 		while (n--) {
// 			int a, b; cin >> a >> b;
// 			A[a].push_back(b);
// 			A[b].push_back(a);
// 		}
// 		int cnt = 0;
// 		for (int i = 1; i <= m; i++) {
// 			if (!check[i]) {
// 				cnt++;
// 				DFS(i);
// 			}
// 		}
// 		cout << cnt << endl;
// 	}
// }