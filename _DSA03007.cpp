#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

bool cmp(long long a, long long b)
{
	return a > b;
}

void Dost()
{
    int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		long long s = 0;
		vector<long long> a(n), b(n);
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < n; i++)
			cin >> b[i];
		sort(a.begin(), a.end());
		sort(b.begin(), b.end(), cmp);
		for (int i = 0; i < n; i++)
			s += a[i] * b[i];
		cout << s << endl;
	}
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}