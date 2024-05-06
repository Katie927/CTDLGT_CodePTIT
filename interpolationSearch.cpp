#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

const int MaxN = 1 + 1e6;

bool search(int arr[], int sz, int target){
    int low = 0, high = sz - 1;
    while(low <= high && target >= arr[low] && target <= arr[high]){
        double m1 = (double) (target - arr[low])/(arr[high] - arr[low]);
        int m2 = high - low;
        int tmp = low + m1*m2;
        if(target == arr[tmp])
            return 1;
        if(arr[tmp] < target)
            low = tmp +1;
        else
            high = tmp -1;

    }
    return 0;
}

void Dost()
{
    int n,k;
    cin>>n>>k;
    int arr[n+7];
    for(int i=0 ; i<n ; i++)        cin>>arr[i];
    cout<<search(arr, n, k)<<endl;
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
