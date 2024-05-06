#include<iostream>
#include<vector>
#define ARR_SIZE 41

using namespace std;

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n, k;
        cin>>n>>k;
        int arr[41] = {};
        arr[0] = -1;
        int check[41] = {};
        for(int i=1 ; i<=k ; i++){
            cin>>arr[i];
            check[arr[i]] = 2;
        }
        int ok = 0;
        for(int i=k ; i>=0 ; i--){
            if(arr[i] < n-k+i){
                if(i == 0)  ok = k;
                arr[i]++;
                for(int j = i+1 ; j<=k ; j++){
                    arr[j] = arr[j-1] + 1;
                }
                break;
            }
        }

        int dem = 0;
        if(ok == k)     dem = k;
        else{
            for(int i = 1 ; i<=k ; i++){
                check[arr[i]] += 1;
                if(check[arr[i]] == 1)  dem++;
            }
        }
        
        cout<<dem<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
 
    Dost();
    return 0;
}