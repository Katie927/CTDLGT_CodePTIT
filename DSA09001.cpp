#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int v, e;
        cin>>v>>e;
        vector<vector<int>> E;
        E.resize(v , vector<int> (0));
        for(int i=1 ; i<=e ; i++){
            int x, y;
            cin>>x>>y;
            E[x].push_back(y);
            E[y].push_back(x);
        }
        for(int i=1 ; i<=v ; i++){
            cout<<i<<": ";
            for(int j=0 ; j<E[i].size() ; j++){
                cout<<E[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}