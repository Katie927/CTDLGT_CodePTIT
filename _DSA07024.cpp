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
        int n;
        cin >> n;
        int a[n], l[n], r[n], ans = 0;
        stack<int> st;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            while (st.size() && a[i] <= a[st.top()])
                st.pop();
            if (st.empty())
                l[i] = 0;
            else
                l[i] = st.top() + 1;
            st.push(i);
        }
        while (st.size())
            st.pop();
        for (int i = n - 1; i >= 0; i--)
        {
            while (st.size() && a[st.top()] >= a[i])
                st.pop();
            if (st.empty())
                r[i] = n - 1;
            else
                r[i] = st.top() - 1;
            st.push(i);
        }
        for (int i = 0; i < n; i++)
            if (r[i] - l[i] + 1 >= a[i])
                ans = max(ans, a[i]);
        cout << ans << endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}