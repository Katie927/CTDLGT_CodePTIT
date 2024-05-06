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
        int n;
        cin >> n;
        int a[n + 1];
        stack<int> st;
        st.push(0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            while (st.size() > 1 && a[st.top()] <= a[i])
                st.pop();
            cout << i - st.top() << " ";
            st.push(i);
        }
        cout << endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}