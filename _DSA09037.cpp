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
    int k, n, m, u, v, s = 0;
    cin >> k >> n >> m;
    vector<vector<int>> a(n + 1);
    int b[k];
    vector<int> c(n + 1, 0);
    for (int i = 0; i < k; i++)
        cin >> b[i];
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        a[u].push_back(v);
    }
    for (int i = 0; i < k; i++)
    {
        queue<int> q;
        int check[n + 1] = {};
        q.push(b[i]);
        check[b[i]] = 1;
        while (q.size())
        {
            u = q.front();
            c[u]++;
            q.pop();
            for (auto v : a[u])
            {
                if (!check[v])
                {
                    q.push(v);
                    check[v] = 1;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++)
        if (c[i] == k)
            s++;
    cout << s;
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}