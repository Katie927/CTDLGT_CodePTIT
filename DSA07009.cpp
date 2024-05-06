// bien doi tien to - trung to
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<stack>
#define MAX_ARR_SIZE 107

using namespace std;

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        string s;
        string ans;
        cin>>s;
        stack<string> st;
        for(int i=s.length()-1 ; i>=0 ; i--){
            if(s[i] >= 'A' && s[i] <='Z'){
                st.push(string(1,s[i]));
            }
            else{
                ans = "(";
                ans += st.top();
                st.pop();
                ans += s[i];
                ans += st.top();
                st.pop();
                ans += ")";
                st.push(ans);
            }
        }
        cout<<st.top()<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}