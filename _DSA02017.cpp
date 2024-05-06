#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

int n = 8, ans;
int c1[20], c2[20], c3[20], a[10][10];
void Try(int x, int s)
{
    if (x == n + 1)
    {
        ans = max(ans, s);
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (c1[i] == 0 && c2[i + x] == 0 && c3[x - i + n] == 0)
        {
            c1[i] = c2[i + x] = c3[x - i + n] = 1;
            Try(x + 1, s + a[x][i]);
            c1[i] = c2[i + x] = c3[x - i + n] = 0;
        }
    }
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        ans = 0;
        for (int i = 0; i < 20; i++)
            c1[i] = c2[i] = c3[i] = 0;
        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
                cin >> a[i][j];
        }
        Try(1, 0);
        cout << ans << endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}