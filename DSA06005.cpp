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
        int n, m;
        cin>>n>>m;
        set<int> Union;
        set<int> Intersection;
        bool check[100007] = {};
        int a[n], b[m];
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
            check[a[i]] = 1;
            Union.insert(a[i]);
        }
        for(int i=0 ; i<m ; i++){
            cin>>b[i];
            Union.insert(b[i]);
            if(check[b[i]] == 1)   Intersection.insert(b[i]);
        }
        for(auto i:Union){
            cout<<i<<" ";
        }
        cout<<endl;
        for(auto i:Intersection){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}