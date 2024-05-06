#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int arr[11];
        vector<int> vec;
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
            vec.push_back(arr[i]);
        }
        
        while(n>0){
            cout<<"[";
            for(int i=0 ; i<n ; i++){
                if(i != n-1)        cout<<vec[i]<<" ";
                else                cout<<vec[i];
            }
            cout<<"]";
            cout<<endl;
            n--;
            vec.resize(0);
            for(int i=0 ; i<n ; i++){
                int sum = arr[i] + arr[i+1];
                vec.push_back(sum);
                arr[i] = vec[i];
            }
        }
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);

    Dost();
    return 0;
}