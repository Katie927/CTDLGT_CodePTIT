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
        vector<long long> vec;
        vec.resize(0);
        for(int i=0 ; i<n ; i++){
            int x;
            cin>>x;
            if(x!=0)    vec.push_back(x);
        }
        sort(vec.begin(), vec.end());
        //vec.push_back(0);
        long long sum = 0;
        long long a = 0, b = 0;
        for(int i=0 ; i<vec.size() ; i++){
            if(i%2 == 0)        a = a*10 + vec[i];
            else                b = b*10 + vec[i];
        }
        sum = a+b;
        cout<<sum<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}