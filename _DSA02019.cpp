#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

int n, m, x, y, ans;
bool check[20][20];
vector<vector<int>> a(20);
void Try(int pos, int k)
{
    ans = max(ans, k);
    for (auto i : a[pos])
    {
        if (!check[i][pos])
        {
            check[i][pos] = check[pos][i] = 1;
            Try(i, k + 1);
            check[i][pos] = check[pos][i] = 0;
        }
    }
}

void Dost()
{
    int t;
    cin >> t;
    while (t--)
    {
        ans = 0;
        cin >> n >> m;
        for (int i = 0; i < 20; i++)
            a[i].clear();
        for (int i = 0; i < m; i++)
        {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        for (int i = 0; i < n; i++)
            Try(i, 0);
        cout << ans << endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}