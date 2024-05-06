#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<stack>

using namespace std;

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int m = n;
        int arr[11];
        vector<int> vec;
        vector<vector<int>> vc1;
        vc1.resize(n, vector<int> (0));
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
            vc1[0].push_back(arr[i]);
            vec.push_back(arr[i]);
        }
        
        int t = 1;
        while(n>0){
            // cout<<"[";
            // for(int i=0 ; i<n ; i++){
            //     if(i != n-1)        cout<<vec[i]<<" ";
            //     else                cout<<vec[i];
            // }
            // cout<<"]";
            n--;
            vec.resize(0);
            for(int i=0 ; i<n ; i++){
                int sum = arr[i] + arr[i+1];
                vec.push_back(sum);
                vc1[t].push_back(sum);
                arr[i] = vec[i];
            }
            t++;
        }

        int y = 1;
        for(int i=m-1 ; i>=0 ; i--){
            cout<<"[";
            for(int j=0 ; j<y ; j++){
                if(j != y-1)    cout<<vc1[i][j]<<" ";
                else            cout<<vc1[i][j];
            }
            cout<<"] ";
            y++;
        }
        cout<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);

    Dost();
    return 0;
}