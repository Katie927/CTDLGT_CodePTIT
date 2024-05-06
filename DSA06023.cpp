#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

void interchange(vector<int> &arr, int n){
    int b=0;
    for(int i=0 ; i<n-1 ; i++){
        int ok = 0;
        for(int j=i+1 ; j<n ; j++){
            if(arr[j]<arr[i]){
                swap(arr[i], arr[j]);
                ok  = 1;
            }
        }
        if(ok == 1){
            cout<<"Buoc "<<++b<<": ";
            for(int x=0 ; x<n ; x++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
}

void Dost()
{
    int n;
    cin>>n;
    vector<int> arr;
    arr.resize(n);
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    interchange(arr, n);
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}