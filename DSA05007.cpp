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
        int n;
        cin >> n;
        int a[n + 2], ans = 0;
        a[0] = a[1] = 0;
        for (int i = 2; i <= n + 1; i++)
        {
            cin >> a[i];
            a[i] = max(a[i] + a[i - 2], a[i - 1]);
            ans = max(ans, a[i]);
        }
        //cout << ans << endl;
        cout << max(a[n], a[n + 1]) << endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}