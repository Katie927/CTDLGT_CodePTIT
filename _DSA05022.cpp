#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n, x, y, z;
        cin >> n >> x >> y >> z;
        int a[n + 2];
        a[1] = x;
        a[2] = a[1] + min(x, z);
        for (int i = 3; i <= n + 1; i++)
        {
            a[i] = a[i - 1] + x;
            if (i % 2 == 0)
                a[i] = min(a[i], a[i / 2] + z);
            a[i - 1] = min(a[i - 1], a[i] + y);
        }
        cout << a[n] << endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}