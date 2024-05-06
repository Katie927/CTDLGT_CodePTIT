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
        int max = 0, min = 39999;
        set<int> st;
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
            st.insert(arr[i]);
            if(arr[i] < min)    min = arr[i];
            if(arr[i] > max)    max = arr[i];
        }
        int k = max - min + 1;
        int t = st.size();
        cout<<k-t<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}