#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<math.h>
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
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        int min = 1000007;
        for(int i=0 ; i<n ; i++){
            for(int j=i+1 ; j<n ; j++){
                if(abs(arr[i] + arr[j]) < abs(min))
                    min = arr[i] + arr[j];
            }
        }
        cout<<min<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}