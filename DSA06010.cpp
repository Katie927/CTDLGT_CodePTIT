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
		cin>>n;
		set<char> st;
		while(n--){
			string s;
			cin>>s;
			for(int i=0 ; i<s.size() ; i++){
				st.insert(s[i]);
			}
		}
        for(auto i:st){
			cout<<i<<" ";
		}
        cout<<endl;
	}
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0; 
}
