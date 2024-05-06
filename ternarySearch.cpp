#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

const int MaxN = 1 + 1e6;

bool ternary_search(int a[], int sz, int target){
    int low = 0, high = sz - 1;
    while(high - low >= 0){
        int tmp = (-low+high)/3;
        int m1 = low + tmp;
        int m2 = high - tmp;
        if(target == a[m1] || target == a[m2])      return 1;
        else if ( target < a[m1] ) 
            high = m1-1;
        else if ( target > a[m2] )
            low = m2+1;
        else {
            low = m1+1;
            high = m2-1;
        } 
    }
    return 0;
}

void Dost()
{
    int n,k;
    cin>>n>>k;
    int arr[n+7];
    for(int i=0 ; i<n ; i++)        cin>>arr[i];
    if(ternary_search(arr, n, k))    cout<<"1"<<endl;
    else                            cout<<"0"<<endl;
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
    cout<<"\n Thoi gian chay factorial(n): "<<setprecision(10)<<time_use;
    return 0;
}
