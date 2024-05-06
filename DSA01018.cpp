#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n, k;
        cin>>n>>k;
        int arr[k+1];
        int pos = k-1;
        int ok = 0;
        for(int i=1  ; i<=k ; i++)
            cin>>arr[i];
        while(arr[pos]+1 == arr[pos+1] && pos>0){
            pos--;
        }
        if(pos == 0){
            for(int i=n-k+1 ; i<=n ; i++){
                cout<<i<<" ";
            }
        }
        else{
            pos++;
            arr[pos]--;
            for(int i=k ; i>pos ; i--)
                arr[i] = n-k+i;
            for(int i=1 ; i<=k ; i++)
                cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}