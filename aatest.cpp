#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

void Dost()
{
    int n;
    cin>>n;
    vector<int> vec;
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        vec.push_back(x);
        cout<<vec.back()<<endl;
    }
}

int main(){
    freopen("CTDL.inp","r",stdin);
    freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}