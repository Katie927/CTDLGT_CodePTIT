#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

int n, k, ok;
int a[101], b[101];

void Try(int posa, int posb, int s){            //  (0, -1, 0) 
    for(int i=posa +1 ; i<=n ; i++){
        if(s+a[i] == k){
            ok = 1;
            b[posb +1] = a[i];
            cout<<"["<<b[0];
            for(int j=1 ; j<= posb+1 ; j++)
                cout<<" "<<b[j];
            cout<<"] ";
            return;
        }
        else if(s+a[i]<k){
            b[posb +1] = a[i];
            Try(i, posb+1, s+a[i]);
        }
    }
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        cin>>n>>k;
        ok = 0;
        for(int i=1 ; i<=n ; i++){
            cin>>a[i];
        }
        sort(a+1, a+n+1);
        Try(0, -1, 0);
        if(ok == 0){
            cout<<-1;
        }
        cout<<endl;
    }
}

int main(){
    freopen("CTDL.inp","r",stdin);
    freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}