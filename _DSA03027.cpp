#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

void Dost()
{
    int n;
	long long x, s = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		s += x + abs(x);
	}
	cout << s;
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}