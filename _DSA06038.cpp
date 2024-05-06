#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<stack>
#define MAX_ARR_SIZE 107

using namespace std;

int bit[1000001];
void update(int i)
{
    for (; i < 1000001; i += i & -i)
        bit[i]++;
}
int get(int i)
{
    int s = 0;
    for (; i; i -= i & -i)
        s += bit[i];
    return s;
}

void Dost()
{
    int n, ans = 0;
    cin >> n;
    int a[n + 1];
    stack<int> st;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = n; i > 0; i--)
    {
        if (a[i] % 2 == 0)
        {
            ans += get(a[i] - 1);
            st.push(a[i]);
        }
        else
        {
            while (!st.empty())
            {
                update(st.top());
                st.pop();
            }
        }
    }
    cout << ans;
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}