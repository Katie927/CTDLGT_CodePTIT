#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<stack>
#include<math.h>
#define MAX_ARR_SIZE 107

using namespace std;

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        if(s.length() %2 == 1){
            cout<<"-1"<<endl;
            continue;
        }
        stack<char> st;
        for(int i=0 ; i<s.size() ; i++){
            if(s[i] == ')' && !st.empty()){
                if(st.top() == '('){
                    st.pop();
                }
                else(st.push(s[i]));
            }
            else{
                st.push(s[i]);
            }
        }   
        int k = st.size();
        int n = 0;
        while(!st.empty() && st.top() == '('){
            st.pop();
            n++;
        }
        cout<<k/2+(n%2)<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}