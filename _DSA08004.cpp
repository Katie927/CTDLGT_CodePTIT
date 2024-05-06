#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

void Dost()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, x;
        string s;
        cin >> k >> s;
        long long n = 0;
        map<char, int> m;
        priority_queue<int> q;
        for (int i = 0; i < s.size(); i++)
            m[s[i]]++;
        for (auto i : m)
            q.push(i.second);
        while (k--)
        {
            x = q.top();
            q.pop();
            q.push(x - 1);
        }
        while (q.size())
        {
            n += (long long)q.top() * q.top();
            q.pop();
        }
        cout << n << endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}