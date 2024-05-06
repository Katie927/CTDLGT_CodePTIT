#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 10000007

using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1 ; i<n ; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
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
    insertionSort(arr, n);
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    freopen("CTDL.inp","r",stdin);
    freopen("CTDL.out","w",stdout);
    clock_t start, end;
        double time_use;
    start = clock();

    Dost();

    end = clock();
    time_use = (double)(end - start) / CLOCKS_PER_SEC;
    cout<<"\n Thoi gian chay factorial(n): "<<time_use;
    return 0;
}