#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 10000007

using namespace std;

void sort(int arr[], int n){
    int b = 0;
    for(int i=0 ; i<n-1 ; i++){
        int min = i;
        int ok = 0;
        for(int j=i ; j<n ; j++){
            if(arr[j] < arr[min]){
                min = j;
                ok  = 1;
            }       
        }
        swap(arr[min], arr[i]);
        // if(ok == 1){
            cout<<"Buoc "<<++b<<": ";
            for(int x=0 ; x<n ; x++){
                cout<<arr[x]<<" ";
            }
            cout<<endl;
        // }
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
    sort(arr, n);
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