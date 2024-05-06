#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

void solve(int arr[], int n){
    int dau = 0;
    int cuoi = n-1;
    for(int i=0 ; i<n-1 ; i++){
        int ok =0;
        for(int j=i+1 ; j<n ; j++){
            if(arr[j] < arr[i]){
                ok = 1;
                dau = i;
                break;
            }
        }
        if(ok == 1)     break;
    }
    for(int i=n-1 ; i>0 ; i--){
        int ok = 0;
        for(int j=i-1 ; j>=0 ; j--){
            if(arr[j] > arr[i]){
                ok = 1;
                cuoi = i;
                break;
            }
        }
        if(ok == 1)     break;
    }
    cout<<dau+1<<" "<<cuoi+1<<endl;
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        solve(arr, n);
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}