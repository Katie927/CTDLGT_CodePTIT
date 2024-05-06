#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

void Dost()
{
    long long test;
    cin>>test;
    while(test--){
        long long n, m, x;
        cin>>n>>m;
        int a[n+1][m+1] = {};
        a[0][1] = 1;
        for(long long i=1 ; i<=n ; i++){
            for(long long j=1 ; j<=m ; j++){
                cin>>x;
                a[i][j] = a[i-1][j] + a[i][j-1];
            }
        }
        cout<<a[n][m]<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}