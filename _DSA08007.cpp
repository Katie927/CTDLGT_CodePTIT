#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<stack>
#define MAX_ARR_SIZE 107

using namespace std;

string n, k;
bool check(string s)
{
	return s.size() < n.size() || (s.size() == n.size() && s <= n);
}

void Dost()
{
    int t;
	cin >> t;
	while (t--)
	{
		int d = 0;
		cin >> n;
		stack<string> st;
		st.push("1");
		while (st.size())
		{
			k = st.top();
			d++;
			st.pop();
			if (check(k + "0"))
				st.push(k + "0");
			if (check(k + "1"))
				st.push(k + "1");
		}
		cout << d << endl;
	}
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}