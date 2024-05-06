#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

int n, ans = 0;
vector<int> a(1000), b(1000);
bool check(int pos)
{
    for (int i = 0; i < n; i++)
        if (a[i] / pos == a[i] / (pos + 1))
            return 0;
    return 1;
}

void Dost()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    b = a;
    sort(b.begin(), b.begin() + n);
    for (int i = b[0]; i >= 0; i--)
    {
        if (check(i))
        {
            for (int j = 0; j < n; ++j)
                ans += a[j] / (i + 1) + 1;
            break;
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