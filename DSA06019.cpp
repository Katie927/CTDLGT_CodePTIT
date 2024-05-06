#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#define MAX_ARR_SIZE 107

using namespace std;

bool cmp(pair<int,int> a, pair<int, int> b){
    if(a.second > b.second)
        return 1;
    if(a.second == b.second && a.first < b.first)
        return 1;
    return 0;
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int arr[n];
        map<int,int> mp;
        vector<pair<int, int>> vp;
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
            vp[arr[i]].second++;

        }   
        
    }
}

int main(){
    freopen("CTDL.inp","r",stdin);
    freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}