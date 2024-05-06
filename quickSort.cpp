#include<bits/stdc++.h>
using namespace std;

const int MaxN = 1 + 1e7;

int n, a[MaxN];

void quickSort(int a[], int left, int right){
    int i = left, j = right;
    int tg = a[(left + right) / 2];
    // Phân chia dãy 
    while(i <= j){
        while(a[i] < tg) i++;
        while(a[j] > tg) j--;
        if(i <= j){
            swap(a[i], a[j]);
            i++;
            j--;
        }
    } 
    // Gọi đệ quy sắp xếp hai đoạn nửa
    if(left < j) quickSort(a, left, j);
    if(i < right) quickSort(a, i, right);
}

void Dost()
{
    cin >> n;
    for(int i = 0 ; i < n ; ++i)    cin >> a[i];
    quickSort(a, 0, n - 1);
    for(int i = 0 ; i < n ; ++i)    cout << a[i] << " ";
    cout<<endl;
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
