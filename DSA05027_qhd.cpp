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
        int a[n], b[n];
        for(int i=0 ; i<n ; i++)
            cin>>a[i];
        for(int i=0 ; i<n ; i++)
            cin>>b[i];
        vector<vector<int>> l(n, vector<int>(m+1,0));
        for(int i=0 ; i<n ; i++){
            for(int j=1 ; j<=m ; j++){
                if(i>0){
                    if(a[i] <= j)
                        l[i][j] = max(l[i-1][j], l[i-1][j-a[i]] + b[i]);
                    else
                        l[i][j] = l[i-1][j];
                }
                else if(a[i] <= j)
                    l[i][j] = b[i];
            }
        }
        cout<<l[n-1][m]<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}