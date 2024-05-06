#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<stack>
#include<map>
#define MAX_ARR_SIZE 107

using namespace std;

void Dost()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], ans[n];
        stack<int> st;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            while (st.size() && m[st.top()] <= m[a[i]])
                st.pop();
            if (st.empty())
                ans[i] = -1;
            else
                ans[i] = st.top();
            st.push(a[i]);
        }
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}