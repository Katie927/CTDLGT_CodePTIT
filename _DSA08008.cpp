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
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n;
        queue<long long> q;
        q.push(1);
        while (q.size())
        {
            k = q.front();
            if (k % n == 0)
            {
                cout << k << endl;
                break;
            }
            q.pop();
            q.push(k * 10);
            q.push(k * 10 + 1);
        }
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}