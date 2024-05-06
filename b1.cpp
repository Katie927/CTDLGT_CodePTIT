#include<iostream>
#include<string>
#include<set>
#define MAX_ARR_SIZE 1e6+7

using namespace std;

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n, m;
        cin>>n>>m;
        set <long long> st;
        while(n--){
            long long a;
            cin>>a;
            st.insert(a);
        }
        while(m--){
            long long a;
            cin>>a;
            st.insert(a);
        }
        for(auto x:st){
            cout<<x<<" ";
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