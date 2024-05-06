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
        string s;
        cin >> s;
        int a[30] = {}, MAX = 0;
        for (int i = 0; i < s.size(); i++)
            a[s[i] - 'a']++;
        for (int i = 0; i < 30; i++)
            MAX = max(MAX, a[i]);
        if (MAX * 2 > s.size() + 1)
            cout << -1 << endl;
        else
            cout << 1 << endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}