#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

bool Prime[1000007] = {};
void is_Prime(){
    Prime[0] = 1;
    Prime[1] = 1;
    for(int i=2 ; i<1000007 ; i++){
        if(!Prime[i]){
            for(int j=i*2 ; j<1000007 ; j+=i){
                Prime[j] = 1;
            }
        }
    }
}

void Dost()
{
    is_Prime();
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int ok = 0;
        for(int i=2 ; i<=n/2 ; i++){
            if(!Prime[i] && !Prime[n-i]){
                cout<<i<<" "<<n-i<<endl;
                ok  = 1;
                break;
            }   
        }
        if(ok == 0)         cout<<"-1"<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}