#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

string a;
int s, n, d, ok;
void Try(int sn)
{
    if (ok)
        return;
    int n = a.size();
    if (n == d)
    {
        if (sn == s)
        {
            ok = 1;
            cout << a << endl;
        }
        return;
    }
    if (s - sn < 0 || s - sn > (d - n) * 9)
        return;
    for (int i = 0; i <= 9; i++)
    {
        a += to_string(i);
        Try(sn + i);
        a.pop_back();
    }
}

void Dost()
{
    int t;
    cin >> t;
    while (t--)
    {
        ok = 0;
        cin >> s >> d;
        for (int i = 1; i <= 9; i++)
        {
            if (!ok)
            {
                a = to_string(i);
                Try(i);
                a.pop_back();
            }
        }
        if (!ok)
            cout << -1 << endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}