// gia tri bieu thuc hau to
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<stack>
#define MAX_ARR_SIZE 107

using namespace std;

int tinh(char c, int a, int b){
    if(c == '+')     return  a + b;
    else    if(c == '-')     return  b - a;
    else    if(c == '*')     return  a * b;
    else    return  b / a;
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        string s;
        // string ans;
        cin>>s;
        stack<int> st;
        for(int i=0 ; i<s.length() ; i++){
            if(s[i] >= '0' && s[i] <='9'){
                st.push(s[i] - 48);
            }
            else{
                int ans = 0;
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                ans = tinh(s[i], a, b);
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