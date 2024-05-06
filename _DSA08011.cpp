#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<queue>
#define MAX_ARR_SIZE 107

using namespace std;

void Dost()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string st, ed, k;
        cin >> n >> st >> ed;
        set<string> s;
        pair<string, int> u, v;
        queue<pair<string, int>> q;
        for (int i = 1; i <= n; i++)
        {
            cin >> k;
            s.insert(k);
        }
        s.erase(st);
        u.first = st;
        u.second = 1;
        q.push(u);
        while (q.size())
        {
            u = q.front();
            q.pop();
            if (u.first == ed)
            {
                cout << u.second << endl;
                break;
            }
            v.second = u.second + 1;
            for (int i = 0; i < u.first.size(); i++)
            {
                k = u.first;
                for (char j = 'A'; j <= 'Z'; j++)
                {
                    k[i] = j;
                    if (s.find(k) != s.end())
                    {
                        s.erase(k);
                        v.first = k;
                        q.push(v);
                    }
                }
            }
        }
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}