#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

void in(vector<int> &arr, int k, vector<int> &vec){
    for(int i=1 ; i<=k ; i++)
        cout<<vec[arr[i]]<<" ";
    cout<<endl;
}

void DeQuy(int i, int n, int k, vector<int> &arr, vector<int> &vec){
    for(int j=i ; j<=n-k+i ; j++){
        if(j>arr[i-1]){
            arr[i] = j;
            if(i == k)      in(arr, k, vec);
            else            DeQuy(i+1 , n, k, arr, vec);
        }
    }
}

void Dost()
{
    int n,k;
    cin>>n>>k;
    set<int> st;
    vector<int> vec;
    vector<int> ToHop;
    vec.resize(1,0);
    ToHop.resize(k+1,0);
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        st.insert(x);
    }
    n = st.size();
    for(auto i: st){
        vec.push_back(i);
    }
    
    // for(int i=1 ; i<=k ; i++){
    //     cout<<ToHop[i]<<endl;
    // }
    DeQuy(1 , n, k, ToHop, vec);
}

int main(){
    freopen("CTDL.inp","r",stdin);
    freopen("CTDL.out","w",stdout);

    Dost();
    return 0;
}