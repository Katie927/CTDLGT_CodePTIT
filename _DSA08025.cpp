#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<queue>
#define MAX_ARR_SIZE 107

using namespace std;

struct data
{
    int x, y, s;
};
int rx[] = {1, 2, -1, 2, 1, -2, -1, -2};
int ry[] = {2, 1, 2, -1, -2, 1, -2, -1};

void Dost()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int check[9][9] = {};
        struct data u, v, k;
        queue<struct data> q;
        u.x = a[0] - 'a' + 1;
        u.y = a[1] - '0';
        u.s = 0;
        v.x = b[0] - 'a' + 1;
        v.y = b[1] - '0';
        q.push(u);
        while (q.size())
        {
            u = q.front();
            q.pop();
            if (u.x == v.x && u.y == v.y)
            {
                cout << u.s << endl;
                break;
            }
            k.s = u.s + 1;
            for (int i = 0; i < 8; i++)
            {
                k.x = u.x + rx[i];
                k.y = u.y + ry[i];
                if (k.x >= 1 && k.x <= 8 && k.y >= 1 && k.y <= 8 && !check[k.x][k.y])
                {
                    check[k.x][k.y] = 1;
                    q.push(k);
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