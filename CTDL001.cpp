#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool check(string str){
    int l = str.length();
    for(int i=0 ; i<=l/2 ; i++){
        if( str[i] != str[l-i-1] )
            return false;
    }
    return true;
}

void Dost()
{
    int n;
    cin>>n;
    string str;
    for(int i=0 ; i<n ; i++){
        str += '0';
    }
    while(true){
        if(check(str)){
            for(int i=0 ; i<n ; i++){
                cout<<str[i]<<" ";
            }
            cout<<endl;
        }
        int ok = 0;

        for(int i=n-1 ; i>=0 ; i--){
            if(str[i] == '0'){
                ok = 1;
                str[i] = '1';
                for(int j = i+1 ; j<n ; j++){
                    str[j] = '0';
                }
                break;
            }
        }
        if ( ok == 0 )       break;
    }
}

int main(){
    // freopen("CTDL.out","w",stdout);
    Dost();
    return 0;
}