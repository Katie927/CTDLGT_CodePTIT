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
        int t;
        cin>>t;
        string s;
        cin>>s;
        cout<<t<<" ";
        vector<int> arr;
        arr.resize(1,0);
        for(int i=0 ; i<s.size() ; i++){
            arr.push_back(s[i]);
        }
        int ok = 0;
        for(int i=arr.size()-2 ; i>=1 ; i--){
            if(arr[i] < arr[i+1]){
                ok = 1;
                sort(arr.begin() + i+1, arr.end());
                for(int j = i+1 ; j<arr.size() ; j++){
                    if(arr[j] > arr[i]){
                        swap(arr[i], arr[j]);
                        break;
                    }
                }
                break;
            }
        }
        if(ok == 0)     cout<<"BIGGEST";
        else            
            for(int i=1 ; i<arr.size() ; i++)
                cout<<char(arr[i]);
        cout<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}