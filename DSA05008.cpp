#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

bool qhd(int arr[], int n, int s){
    int f[s+1] = {0};
    f[0] = 1;
    for(int i=0 ; i<n ; i++){
        for(int j = s ; j>=arr[i] ; j--){
            if(f[j] == 0 && f[j-arr[i]] == 1)   f[j] = 1;
        }
    }
    return f[s];
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n, s;
        cin>>n>>s;
        int arr[n];
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        bool tmp = qhd(arr, n, s);
        if(tmp)         cout<<"YES"<<endl;
        else            cout<<"NO"<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}