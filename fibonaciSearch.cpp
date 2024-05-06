#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

int min(int x, int y) { return (x <= y) ? x : y; }

bool fibonacci_search(int arr[], int n, int k){
    int m1 = 0;
    int m2 = 1;
    int fibm = m1 + m2;
    while(fibm <n){
        m2 = m1;
        m1 = fibm;
        fibm = m1 + m2;
    }
    int tmp = -1;
    while(fibm > 1){
        int i = min(tmp + m2, n-1);
        if(arr[i] < k){
            fibm = m1;
            m1 = m2;
            m2 = fibm - m1;
            tmp = i;
        }
        else if(arr[i] > k){
            fibm = m2;
            m1 = m1 - m2;
            m2 = fibm - m1;
        }
        else        return 1;
    }
    if(m1 && arr[tmp + 1] == k)
        return 1;
    return 0;
}

void Dost()
{
    int n,k;
    cin>>n>>k;
    int arr[n+7];
    for(int i=0 ; i<n ; i++)        cin>>arr[i];
    cout<<fibonacci_search(arr, n, k)<<endl;
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
