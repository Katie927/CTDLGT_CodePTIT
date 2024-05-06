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
        int n, ok = 0;
        cin >> n;
        for (int i = 0; i <= n / 4; i++)
        {
            if ((n - i * 4) % 7 == 0)
            {
                ok = 1;
                for (int j = 0; j < i; j++)
                    cout << 4;
                for (int j = 0; j < (n - i * 4) / 7; j++)
                    cout << 7;
                cout << endl;
                break;
            }
        }
        if (ok == 0)
            cout << -1 << endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}