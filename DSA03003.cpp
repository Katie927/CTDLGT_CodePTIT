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
        long long n;
        cin>>n;
        long long arr[n];
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        long long sum = 0;
        long long mod = 1e9 +7;
        for(int i=0 ; i<n ; i++){
            sum = sum + arr[i]*i;
            sum %= mod;
        }
        cout<<sum<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}