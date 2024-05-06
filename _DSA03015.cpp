#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

void Dost()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, m;
        cin >> n >> s >> m;
        if (s * m > (s - s / 7) * n)
            cout << -1 << endl;
        else
        {
            for (int i = 1; i <= s - s / 7; i++)
            {
                if (n * i >= s * m)
                {
                    cout << i << '\n';
                    break;
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