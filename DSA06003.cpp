#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

void Sort(int arr[], int n){
    int dem = 0;
    for(int i=0 ; i<n-1 ; i++){
        int tmp = i;
        for(int j=i+1 ; j<n ; j++){
            if(arr[j] < arr[tmp]){
                tmp = j;
            }
        }
        if(tmp != i)    dem++;
        swap(arr[tmp], arr[i]);
    }
    cout<<dem<<endl;
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
        Sort(arr, n);
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}
