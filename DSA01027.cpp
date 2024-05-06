#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void sinhHoanVi(int arr, int n){
    for(int i=0 ; i<n ; i++){

    }
}

void Dost()
{
    int n;
    cin>>n;
    int arr[11];
    for(int i=1 ; i<=n ; i++){
        cin>>arr[i];
    }
    arr[0] = 0;
    sort(arr, arr+n+1);
    // for(int i=1 ; i<=n ; i++){
    //     cout<<arr[i]<<" ";
    // }
    while(true){
        for(int i=1 ; i<=n ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        int ok = 0;
        for(int i=n-1 ; i>=1 ; i--){
            if(arr[i] < arr[i+1]){
                ok = 1;
                sort(arr+i+1 , arr+n+1);
                for(int j=i+1 ; j<=n ; j++){
                    if(arr[j] > arr[i]){
                        swap(arr[i], arr[j]);
                        break;
                    }
                }
                break;
            }
        }
        if(ok == 0)     break;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);

    Dost();
    return 0;
}