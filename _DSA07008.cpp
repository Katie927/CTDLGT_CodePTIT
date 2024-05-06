#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<stack>
#define MAX_ARR_SIZE 107

using namespace std;

string ts = "+-*/^";
bool check(char c)
{
    for (int i = 0; i < ts.size(); i++)
        if (ts[i] == c)
            return 1;
    return 0;
}
bool Var(char c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
int Deg(char c)
{
    if (c == '^')
        return 50;
    if (c == '*' || c == '/')
        return 100;
    if (c == '+' || c == '-')
        return 300;
    return 1000;
}

void Dost()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, ans;
        cin >> s;
        stack<char> st;
        st.push('#');
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                st.push(s[i]);
                continue;
            }
            if (s[i] == ')')
            {
                while (st.top() != '(')
                {
                    ans += st.top();
                    st.pop();
                }
                st.pop();
                continue;
            }
            if (Var(s[i]))
            {
                ans += s[i];
                continue;
            }
            if (check(s[i]))
            {
                while (Deg(st.top()) <= Deg(s[i]))
                {
                    ans += st.top();
                    st.pop();
                }
                st.push(s[i]);
                continue;
            }
        }
        while (st.top() != '#')
        {
            ans += st.top();
            st.pop();
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