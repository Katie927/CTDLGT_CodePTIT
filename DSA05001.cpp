#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

int lcs(string s1, string s2){
    int kq[s1.length() +1][s2.length() +1] = {};
    for(int i=0 ; i<s1.length() ; i++){
        for(int j=0 ; j<s2.length() ; j++){
            if(s1[i] == s2[j]){
                kq[i+1][j+1] = kq[i][j]+1;
            }
            else{
                kq[i+1][j+1] = max(kq[i][j+1], kq[i+1][j]);
            }
        }
    }
    return kq[s1.length()][s2.length()];
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        string s1, s2;
        cin>>s1>>s2;
        cout<<lcs(s1, s2)<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}