#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

int v5(string s){
    int x = 0;
    for(int i=0 ; i<s.length() ; i++){
        if(s[i] == '6')         s[i]--;
        x = x*10 + (s[i] - '0');
    }
    return x;
}
int v6(string s){
    int x = 0;
    for(int i=0 ; i<s.length() ; i++){
        if(s[i] == '5')         s[i]++;
        x = x*10 + (s[i] - '0');
    }
    return x;
}

void Dost()
{
    string a, b;
    cin>>a>>b;
    cout<<v5(a)+v5(b)<<" "<<v6(a)+v6(b);
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}