#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

const int MaxN = 1 + 1e6;

int binary_search(int a[], int sz, int target){
    int low = 0, high = sz - 1;
    while(low <= high){
        int tg = (low + high) / 2;
        if(a[tg] == target) return tg;
        else if(target < a[tg]) high = tg - 1;
        else low = tg + 1;
    }
    return -1;
}

void Dost()
{
    int n,k;
    cin>>n>>k;
    int arr[n+7];
    for(int i=0 ; i<n ; i++)        cin>>arr[i];
    int tmp = binary_search(arr, n, k);
    if(tmp != -1)   cout<<tmp+1<<endl;
    else            cout<<"NO"<<endl;

}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);

    // clock_t start, end;
    //     double time_use;
    // start = clock();
    int test;
    cin>>test;
    while(test--){
        Dost();
    }
    

    // end = clock();
    // time_use = (double)(end - start) / CLOCKS_PER_SEC;
    // cout<<"\n Thoi gian chay factorial(n): "<<setprecision(10)<<time_use;
    return 0;
}
