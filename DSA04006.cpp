#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<math.h>
#define MAX_ARR_SIZE 107

using namespace std;

long long Find(long long pos, long long n, long long ctr)
{
	if (pos & 1)
		return 1;
	if (pos == ctr)
		return (n % 2);
	if (pos > ctr)
		return Find(pos - ctr, n / 2, ctr / 2);
	return Find(pos, n / 2, ctr / 2);
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        long long n, l, r;
        cin>>n>>l>>r;
        long long ctr = pow(2, (long long)log2(n)), ans = 0;
		for (long long i = l; i <= r; i++)
			ans += Find(i, n, ctr);
		cout << ans << endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}