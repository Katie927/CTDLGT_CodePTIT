#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

int n,k;
int arr[17];

bool check(int arr[]){
    int dem =0;
    for(int i=1 ; i<=n ; i++){
        if(arr[i] == 1)     dem++;
        if(dem > k)         return 0;
    }
    if(dem != k)    return 0;
    else            return 1;
}
void in(int x[]){
    if(check(arr)){
        for (int i = 1; i <= n; i++)
            cout << x[i];
        cout << "\n";
    }
}
void SinhNhiPhan(int i){
    for(int j=0 ; j<=1 ; j++){
        arr[i] = j;
        if(i == n)      in(arr);
        else            SinhNhiPhan(i+1);
    }
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        cin>>n>>k;
        SinhNhiPhan(1);
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}