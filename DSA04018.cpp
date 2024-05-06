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
        int tmp = 0;
        int arr[n];
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
            if(arr[i] == 0)      tmp++;
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