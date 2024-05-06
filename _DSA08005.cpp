#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

string to_binary(int n)
{
    string s = "";
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            s = '0' + s;
        }
        else
        {
            s = '1' + s;
            n--;
        }
        n /= 2;
    }
    return s;
}

void Dost()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cout << to_binary(i) << " ";
        }
        cout << endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}