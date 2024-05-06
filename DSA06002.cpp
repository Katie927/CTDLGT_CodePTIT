#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<math.h>
#define MAX_ARR_SIZE 107

using namespace std;

void bubbleSort(int arr[], int n, int arr0[]){
    for(int i=0 ; i<n-1 ; i++){
        bool ok = 0;
        for(int j=0 ; j<n-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                ok = 1;
                swap(arr[j], arr[j+1]);
                swap(arr0[j], arr0[j+1]);
            }
        }
        if(ok == 0)         break;
    }
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n, k;
        cin>>n>>k;
        int arr[n];
        int arr0[n];
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
            arr0[i] = abs(arr[i] - k);
        }
        bubbleSort(arr0, n, arr);
        for(int i=0 ; i<n ; i++){
            cout<<arr[i]<<" ";
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