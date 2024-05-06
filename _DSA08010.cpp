#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<math.h>
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
        pair<int, int> u, v;
        queue<pair<int, int>> q;
        map<int, int> m;
        u.first = n;
        u.second = 0;
        q.push(u);
        while (q.size())
        {
            u = q.front();
            q.pop();
            if (u.first == 2)
            {
                cout << u.second + 1 << endl;
                break;
            }
            for (int i = 2; i <= sqrt(u.first); i++)
            {
                if (u.first % i == 0 && !m[u.first / i])
                {
                    m[u.first / i]++;
                    q.push({u.first / i, u.second + 1});
                }
            }
            q.push({u.first - 1, u.second + 1});
        }
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}