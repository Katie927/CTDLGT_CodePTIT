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
        int n;
        cin>>n;
        int m[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
        int dem = 0;
        for(int i=9 ; i>=0 ; i--){
            while(n >= m[i]){
                n -= m[i];
                dem++;
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