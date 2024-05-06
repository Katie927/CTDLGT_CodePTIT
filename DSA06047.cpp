#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

bool check(long long b[], long long n){
    sort(b, b+n);
    for(int i=0 ; i<n-1 ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(binary_search(b+j, b+n, b[i]+b[j]))
                return 1;
        }
    }
    return 0;
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        long long arr[n];
        long long b[n];
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
            b[i] = arr[i]*arr[i];
        }
        if(check(b, n))     cout<<"YES"<<endl;
        else                cout<<"NO"<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}