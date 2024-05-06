#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<queue>
#define MAX_ARR_SIZE 107

using namespace std;

vector<int> check;
vector<vector<int>> vec;
void BFS(int u, int V){
    queue<int> s;
    vector<int> ans;
    check[u] = 1;
    s.push(u);
    while(!s.empty()){
        int i = s.front();
        ans.push_back(i);
        s.pop();
        for(int v = 1 ; v<=V ; v++){
            if(vec[i][v] == 1 && check[v] == 0){
                s.push(v);
                check[v] = 1;
            }
        }
    }
    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int V, E, u;
        cin>>V>>E>>u;
        check.assign(V+1,0);
        vec.assign(V+1, vector<int> (V+1, 0));
        for(int i=1 ; i<=E ; i++){
            int x, y;
            cin>>x>>y;
            vec[x][y] = 1;
            vec[y][x] = 1;
        }
        BFS(u, V);
        cout<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}