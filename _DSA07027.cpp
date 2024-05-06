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
        stack<int> st;
        vector<int> a(n), b(n, -1);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && a[i] > a[st.top()])
            {
                b[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        for (int i = 0; i < n; i++)
        {
            if (b[i] == -1)
                cout << -1 << " ";
            else
                cout << a[b[i]] << " ";
        }
        cout << endl;
    }
}

int main(){
//     freopen("CTDL.inp","r",stdin);
//     freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}