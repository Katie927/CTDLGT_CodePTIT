#include<iostream>
#define MAX_ARR_SIZE 10000007

using namespace std;

void merge(int arr[], int p, int q, int r){     
    // hàm merge hoạt động với các mảng đã được chia chỉ còn 1 phần tử
    // sắp đặt phần tử nhỏ hơn trước và lớn hơn phía sau
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        M[j] = arr[q + 1 + j];

    int i, j, k;
    i = 0;
    j = 0;
    k = p;
    while (i < n1 && j < n2) {
        if (L[i] <= M[j]) {
        arr[k] = L[i];
        i++;
        } else {
        arr[k] = M[j];
        j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = M[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        // thao tác gọi đề quy đê liên tục chia nhỏ dãy cần sắp xếp
        merge(arr, l, m, r);
    }
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int arr[n+9];
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        mergeSort(arr, 0, n-1);
        for(int i=0 ; i<n ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    // clock_t start, end;
    //     double time_use;
    // start = clock();

    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    Dost();

    // end = clock();
    // time_use = (double)(end - start) / CLOCKS_PER_SEC;
    // cout<<"\n Thoi gian chay factorial(n): "<<time_use;
    return 0;
}