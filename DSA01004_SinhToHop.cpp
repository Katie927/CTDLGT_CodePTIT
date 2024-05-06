#include<iostream>
#include<vector>
#define MAX_ARR_SIZE 17

using namespace std;

int n,k;
int arr[17], arr0[17];

void in(int x[]){
    for (int i = 1; i <= k; i++)
        cout << arr0[x[i]]<<" ";
    cout << "\n";
}

void SinhToHop(int i){
    for(int j=i ; j<=n-k+i ; j++){
        if(j > arr[i-1]){
            arr[i] = j;
            if( i == k ){
                in(arr);
            }
            else {
                SinhToHop(i+1);
            }
        }
    }
}

void Dost()
{
        cin>>n>>k;
        for(int i=1 ; i<=n ; i++)
            cin>>arr0[i];
        SinhToHop(1); 
}

int main(){
    freopen("CTDL.inp","r",stdin);
    freopen("CTDL.out","w",stdout);

    Dost();
    return 0;
}