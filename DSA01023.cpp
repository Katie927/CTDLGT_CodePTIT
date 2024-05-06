#include<iostream>

using namespace std;

bool check(int arr[], int arr0[], int n){
    for(int i=1 ; i<=n ; i++){
        if( arr[i] != arr0[i] )     return 0;
    }
    return 1;
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n,k;
        cin>>n>>k;
        int arr[16], arr0[16];
        for(int i=1 ; i<=k ; i++){
            cin>>arr[i];
            arr0[i] = i;
        }
        
        int dem = 0;
        while(++dem){
            if( check(arr, arr0, k) ){
                cout<<dem<<endl;
                break;
            }
            for(int i=k ; i>=1 ; i--){
                if(arr0[i] < n-k+i){
                    arr0[i] ++;
                    for(int j=i+1 ; j<=k ; j++){
                        arr0[j] = arr0[j-1] + 1;
                    }
                    break;
                }
            }
        }
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);

    Dost();
    return 0;
}