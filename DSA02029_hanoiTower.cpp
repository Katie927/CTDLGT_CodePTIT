#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

void tower(int n, char a, char b, char c){
    if(n == 1){
        cout<<a<<" -> "<<c<<endl;
        return ;
    }
    tower(n-1, a, c, b);
    tower(1, a, b, c);
    tower(n-1, b, a, c);
}

void Dost()
{
    char a = 'A', b = 'B', c = 'C';
    int n;
    cin>>n;
    tower(n, a, b, c);
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}