#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<math.h>
#define MAX_ARR_SIZE 107

using namespace std;

int count(int x, int y[], int n, int a[])
{
	if (x == 0)
		return 0;
	if (x == 1)
		return a[0];
	int it = upper_bound(y, y + n, x) - y;
	int ans = n - it;
	ans += (a[0] + a[1]);
	if (x == 2)
		ans -= (a[3] + a[4]);
	if (x == 3)
		ans += a[2];
	return ans;
}

void Dost()
{
    int test;cin>>test;
    while(test--){
        int n, m;
		cin >> n >> m;
		int x[n], y[m], a[5] = {}, s = 0;
		for (int i = 0; i < n; i++)
			cin >> x[i];
		for (int i = 0; i < m; i++)
			cin >> y[i];
		for (int i = 0; i < n; i++)
		{
			if (y[i] < 5)
				a[y[i]]++;
		}
		sort(y, y + n);
		for (int i = 0; i < m; i++)
			s += count(x[i], y, n, a);
		cout << s << endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}