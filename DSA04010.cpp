#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<limits.h>
#define MAX_ARR_SIZE 107

using namespace std;

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int arr[n];
        int sum[n+1];
        sum[0] = 0;
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
            sum[i+1] = sum[i] + arr[i];
        }
        int smax = INT_MIN;
        for(int i=0 ; i<n ; i++){
            for(int j=i+1 ; j<=n ; j++){
                int _max = sum[j] - sum[i];
                if(_max > smax)     smax = _max;
            }
        }
        cout<<smax<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}