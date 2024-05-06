#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

int gx[] = {1, -1, 0, 0};
int gy[] = {0, 0, 1, -1};
int gh[] = {1, 2, 3, 4};
struct point
{
    int x, y, h, s;
};

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n, m, ok = 0;
        cin >> n >> m;
        cin.ignore();
        char a[n + 1][m + 1];
        point st, ed, k;
        queue<point> q;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 'S')
                {
                    st.x = i;
                    st.y = j;
                }
                else if (a[i][j] == 'T')
                {
                    ed.x = i;
                    ed.y = j;
                }
            }
        }
        k = st;
        k.s = 0;
        for (int i = 0; i < 4; i++)
        {
            k.x += gx[i];
            k.y += gy[i];
            k.h = gh[i];
            if (k.x >= 1 && k.x <= n && k.y >= 1 && k.y <= m && a[k.x][k.y] == '.')
                q.push(k);
            k.x -= gx[i];
            k.y -= gy[i];
        }
        while (q.size())
        {
            st = q.front();
            q.pop();
            if (st.x == ed.x && st.y == ed.y)
            {
                ok = 1;
                break;
            }
            k = st;
            for (int i = 0; i < 4; i++)
            {
                k.h = st.h;
                k.s = st.s;
                k.x += gx[i];
                k.y += gy[i];
                if (st.h != gh[i])
                {
                    k.h = gh[i];
                    k.s++;
                }
                if (k.x >= 1 && k.x <= n && k.y >= 1 && k.y <= m && k.s <= 2 && a[k.x][k.y] != '*')
                    q.push(k);
                k.x -= gx[i];
                k.y -= gy[i];
            }
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}   

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}