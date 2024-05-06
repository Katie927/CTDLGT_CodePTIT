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
        int n, m;
        cin>>n>>m;
        int a[n], b[m];
        multiset<int> st;
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
            st.insert(a[i]);
        }
        for(int i=0 ; i<m ; i++){
            cin>>b[i];
            st.insert(b[i]);
        }
        for(auto i:st){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}