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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        int k = 0, ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (st.size() == 0)
                st.push(s[i]);
            else if (st.top() == '[' && s[i] == ']')
            {
                st.pop();
                k += 2;
            }
            else if (st.top() == ']' && s[i] == '[')
            {
                ans += st.size() + k;
                st.pop();
            }
            else if (s[i] == '[')
                st.push(s[i]);
            else if (st.top() == ']' && s[i] == ']')
                st.push(s[i]);
            if (st.size() == 0)
                k = 0;
        }
        cout << ans << endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}