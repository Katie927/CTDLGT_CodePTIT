#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

void Dost()
{
    int n;
    cin>>n;
    vector<long> le;
    vector<long> chan;
    long arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
        if(i%2 ==0)     le.push_back(arr[i]);
        else            chan.push_back(arr[i]);
    }
    sort(le.begin(), le.end());
    sort(chan.begin(), chan.end(), greater<long>());
    for(int i=0 ; i<n/2 ; i++){
        cout<<le[i]<<" "<<chan[i]<<" ";
    }
    if(n%2!=0) cout<<le[n/2];
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}