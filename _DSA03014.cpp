#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

bool check(string s1, string s2)
{
    int k = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        int ok = 0;
        for (int j = k; j < s2.size(); j++)
        {
            if (s1[i] == s2[j])
            {
                ok = 1;
                k = j + 1;
                break;
            }
        }
        if (!ok)
            return 0;
    }
    return 1;
}

void Dost()
{
    int t;
    cin >> t;
    vector<string> f;
    for (long long i = 1; i <= 50; i++)
        f.push_back(to_string(i * i * i));
    while (t--)
    {
        string s, ans = "-1";
        cin >> s;
        for (int i = f.size() - 1; i >= 0; i--)
        {
            if ((f[i].size() < s.size() || f[i] < s) && check(f[i], s))
            {
                ans = f[i];
                break;
            }
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