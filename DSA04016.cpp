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
        int n, m, k;
        cin>>n>>m>>k;
        int a[n], b[m];
        vector<int> vec;
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
            vec.push_back(a[i]);
        }
        for(int i=0 ; i<m ; i++){
            cin>>b[i];
            vec.push_back(b[i]);
        }
        sort(vec.begin(), vec.end());
        cout<<vec[k-1]<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}