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
        int e, v;
        cin>>e>>v;
        vector<vector<int>> E;
        E.resize(e+1, vector<int> (0));
        for(int i=0 ; i<v ; i++){
            int x, y;
            cin>>x>>y;
            E[x].push_back(y);
        }
        for(int i=1 ; i<=e ; i++){
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