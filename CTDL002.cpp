#include<iostream>
#include<vector>

using namespace std;

int n,k;
vector<int> a, b;
int dem = 0;

void in(){
    int sum = 0;
    for(int i=0 ; i<n ; i++){
        if(a[i] == 1){
            sum += b[i];
        }
    }
    if(sum == k){
        dem++;
        for(int i=0 ; i<n ; i++){
            if(a[i] == 1){
                cout<<b[i]<<" ";
            }
        }
        cout<<endl;
    }
}

void DeQuy(int dq){
    for(int i=0 ; i<=1 ; i++){
        a[dq] = i;
        if(dq == n-1){
            in();
        }
        else{
            DeQuy(dq+1);
        }
    }
}

void Dost()
{
    cin>>n>>k;
    a.resize(n,0);
    b.resize(n,0);
    for(int i=0 ; i<n ; i++){
        cin>>b[i];
    }
    DeQuy(0);
    cout<<dem;
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    Dost();
    return 0;
}