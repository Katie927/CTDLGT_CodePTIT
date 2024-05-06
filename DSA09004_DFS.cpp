#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<stack>
#define MAX_ARR_SIZE 107

using namespace std;

vector<int> check;
vector<vector<int>> vec;

void DFS(int u, int V){
    stack<int> ans;
    ans.push(u);
    check[u] =  1;
    cout<<u<<" ";
    while(!ans.empty()){
        int i = ans.top();
        ans.pop();
        for(int v=1 ; v<=V ; v++){
            if(vec[i][v] == 1 && check[v] == 0){
                cout<<v<<" ";
                ans.push(i);
                ans.push(v);
                check[v] = 1;
                break;
            }
        }
    }
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int V, E;
        cin>>V>>E;
        int u;
        cin>>u;
        check.assign(V+1, 0);
        vec.assign(V+1, vector<int> (V+1,0));
        for(int i=1 ; i<=E ; i++){
            int x, y;
            cin>>x>>y;
            vec[x][y] = 1;
            vec[y][x] = 1;
        }
        DFS(u, V);
        cout<<endl;
    }
}

int main(){
    freopen("CTDL.inp","r",stdin);
    freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}