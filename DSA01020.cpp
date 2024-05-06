#include<iostream>

using namespace std;

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        int l = s.length();
        if(s[l-1] == '1'){
            s[l-1] = '0';
        }
        else{
            int i = l-1;
            while(s[i] == '0'){
                s[i] = '1';
                i--;
            }
            if(i >=0 )      s[i] = '0';
        }
        cout<<s<<endl;
    }
}

int main(){
    Dost();
    return 0;
}