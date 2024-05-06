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
        int arr[n];
        int l[n] = {};
        int lg = 0;
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
            l[i] = 1;
            for(int j=0 ; j<i ; j++){
                if(arr[i] >= arr[j] && l[i] <= l[j]){
                    l[i] = l[j] +1;
                }
            }
            lg = max(lg, l[i]);
        }
        cout<<n-lg<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}