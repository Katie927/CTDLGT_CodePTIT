#include<iostream>

using namespace std;

int n, k;
int arr[18];

bool check( int arr[] ){
    if(arr[1] == 0 || arr[n] == 1)      return 0;
    for(int i=2 ; i<=n ; i++){
        if(arr[i] == 1 && arr[i-1] == 1)    return 0;
    }
    return 1;
}

void in(int arr[]){
    if( check(arr) ){
        for(int i=1 ; i<=n ; i++){
            if(arr[i] == 1)     cout<<"H";
            else                cout<<"A";
        }
        cout<<endl;
    }
}

void DeQuy(int i){
    for(int j=0 ; j<=1 ; j++){
        arr[i] = j;
        if(i == n)      in(arr);
        else            DeQuy(i+1);
    }
}

void Dost()
{
    int test;
    cin>>test;
    while (test--){
        cin>>n;
        arr[21] = {};
        DeQuy(1);
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);

    Dost();
    return 0;
}