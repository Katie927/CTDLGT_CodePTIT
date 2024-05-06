#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

string s1, s2;
int dp()
{
    int m = s1.size(), n = s2.size();
    int f[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0)
                f[i][j] = j;
            else if (j == 0)
                f[i][j] = i;
            else if (s1[i - 1] == s2[j - 1])
                f[i][j] = f[i - 1][j - 1];
            else
                f[i][j] = 1 + min(f[i][j - 1], min(f[i - 1][j], f[i - 1][j - 1]));
        }
    }
    return f[m][n];
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        cin >> s1 >> s2;
        cout << dp() << endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}