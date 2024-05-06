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
        set<int> st;
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
            st.insert(arr[i]);
        }
        if(st.size() <= 1)  cout<<-1<<endl;
        else{
            int i=0;
            for(auto x:st){
                cout<<x<<" ";
                i++;
                if(i == 2){
                    cout<<endl;
                    break;
                }
            }
        }
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}