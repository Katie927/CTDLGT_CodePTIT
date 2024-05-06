#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int ans = 0, k= 0;
        vector<pair<int, int>> a(n);
        for(int i=0 ; i<n ; i++){
            cin>>a[i].first>>a[i].second;
        }
        sort(a.begin(), a.end(), cmp);
        for(int i=0 ; i<n ; i++){
            if(a[i].first >= k){
                k = a[i].second;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}