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
        long long n, m;
        cin>>n>>m;
        long long min = 100000007;
        long long max = -min;
        while(n--){
            long long x;
            cin>>x;
            if(x>max)   max = x;
            // cout<<max<<" ";
        }
        while(m--){
            long long y;
            cin>>y; 
            if(y<min)   min = y;
            // cout<<min<<" ";
        }
        long long k = max * min;
        cout<<k<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}