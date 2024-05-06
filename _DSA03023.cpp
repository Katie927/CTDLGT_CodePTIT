#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

int n, ok, ans = 0;
string s;
void Try(int l, int pos, char c)
{
    for (int i = l; i < n; i++)
    {
        if (s[i] == c)
        {
            ok = 1;
            swap(s[pos], s[i]);
            ans++;
            return;
        }
    }
}

void Dost()
{
    cin >> n >> s;
    int dx = 0, dt = 0, dd = 0;
    for (auto i : s)
    {
        if (i == 'X')
            dx++;
        else if (i == 'T')
            dt++;
        else
            dd++;
    }
    for (int i = 0; i < dx; ++i)
    {
        if (s[i] == 'T')
            Try(dx, i, 'X');
        else if (s[i] == 'D')
        {
            ok = 0;
            Try(dx + dt, i, 'X');
            if (ok == 0)
                Try(dx, i, 'X');
        }
    }
    for (int i = dx; i < dt + dx; i++)
        if (s[i] == 'D')
            Try(dx + dt, i, 'T');
    cout << ans;
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}