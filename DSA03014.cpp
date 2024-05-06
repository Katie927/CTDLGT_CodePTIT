#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
#include<set>
#include<math.h>
#define MAX_ARR_SIZE 107

using namespace std;

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        int ok = 0;
        long long x;
        for(int i=0 ; i<s.length() ; i++){
            stringstream ss;
            ss << s;
            ss >> x;
            cout<<x<<endl;
            double tmp = cbrt(x);
            if(tmp == floor(tmp)){
                ok = 1;
                break;
            }
            s.erase(0);
        }
        if(ok = 1)  cout<<x<<endl;
        else        cout<<-1<<endl;
    }
}

int main(){
    freopen("CTDL.inp","r",stdin);
    freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}