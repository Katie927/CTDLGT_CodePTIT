#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

void Dost()
{
    int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int ans = 0;
		stack<char> st;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '(')
				st.push(s[i]);
			else
			{
				if (!st.empty())
				{
					ans += 2;
					st.pop();
				}
			}
		}
		cout << ans << endl;
	}
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}