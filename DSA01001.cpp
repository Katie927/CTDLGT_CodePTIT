#include<iostream>
#include<string>

using namespace std;

void Dost()
{
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int sz = s.length();
        int ok = 0;
        for(int i=s.length()-1 ; i>=0 ; i--){
            if(s[i] == '0'){
                s[i] = '1';
                for(int j=i+1 ; j<s.length() ; j++){
                    s[j] = '0';
                }
                break;
            }
            else if(s[0] == '1' && i == 0){
                s.resize(0);
                s.resize(sz , '0');
                break;
            }
        }
        cout<<s<<endl;
    }
}

int main(){
    Dost();
    return 0;
}