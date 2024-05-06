#include<iostream>
#include<algorithm>

using namespace std;

int n;

bool check(int arr[], int arr0[]){
    for(int i=1 ; i<=n ; i++){
        if(arr[i] != arr0[i])      return 0;
    }
    return 1;
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        cin>>n;
        int arr[11];
        int arr0[11];
        int dem = 0;
        for(int i = 1 ; i<=n ; i++){
            cin>>arr[i];
            arr0[i] = i;
        }
        
        while(++dem){
            if(check(arr, arr0)){
                cout<<dem<<endl;
                break;
            }
            for(int i=n-1 ; i>=1 ; i--){
                if(arr0[i] < arr0[i+1]){
                    sort(arr0+i+1 , arr0+n+1);
                    for(int j = i+1 ; j<=n ; j++){
                        if(arr0[j] > arr0[i]){
                            swap(arr0[i], arr0[j]);
                            break;
                        }
                    }
                    break;
                }
            }
        }
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);

    Dost();
    return 0;
}