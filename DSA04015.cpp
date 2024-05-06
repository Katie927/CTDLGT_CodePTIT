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
        int tmp = -1;
        for(int i=0 ; i<n ; i++){
            int x;
            cin>>x;
            if(x <= k)   tmp = i+1;
        }
        cout<<tmp<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}