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
    int t;
    cin >> t;
    while (t--)
    {
        int ok = 1;
        string s;
        cin >> s;
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                st.push(s[i]);
            else if (s[i] == ')')
            {
                if (st.size() && st.top() == '(')
                    st.pop();
                else
                {
                    ok = 0;
                    break;
                }
            }
            else if (s[i] == ']')
            {
                if (st.size() && st.top() == '[')
                    st.pop();
                else
                {
                    ok = 0;
                    break;
                }
            }
            else
            {
                if (st.size() && st.top() == '{')
                    st.pop();
                else
                {
                    ok = 0;
                    break;
                }
            }
        }
        if (st.size())
            ok = 0;
        if (ok == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}