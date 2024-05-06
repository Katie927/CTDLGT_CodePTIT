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
        int n, t;
        cin>>n>>t;
        int dem = 0;
        while(n--){
            int x;
            cin>>x;
            if(x == t)      dem++;
        }
        if(dem == 0)        cout<<"-1"<<endl;
        else                cout<<dem<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}