#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 10000007

using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=0 ; i<n-1 ; i++){
        bool ok = 0;
        for(int j=0 ; j<n-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                ok = 1;
                swap(arr[j], arr[j+1]);
            }
        }
        if(ok == 1){
            cout<<"Buoc "<<i+1<<": ";
            for(int i=0 ; i<n ; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        if(ok == 0)         break;
    }
}

void Dost()
{
    int n;
    cin>>n;
    int arr[n+9];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    bubbleSort(arr, n);
    // for(int i=0 ; i<n ; i++){
    //     cout<<arr[i]<<" ";
    // }
    cout<<endl;
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);

    // clock_t start, end;
    //     double time_use;
    // start = clock();

    Dost();

    // end = clock();
    // time_use = (double)(end - start) / CLOCKS_PER_SEC;
    // cout<<"\n Thoi gian chay factorial(n): "<<time_use;
    return 0;
}