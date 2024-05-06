#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        stack<int> st;
        int l = 0;
        st.push(-1);
        for(int i=0 ; i<s.length() ; i++){
            if(s[i] == '('){
                st.push(i);
            }
            else{
                st.pop();
                if(!st.empty()){
                    l = max(l, i-st.top());
                }
                else{
                    st.push(i);
                }
            }
        }
        cout<<l<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}