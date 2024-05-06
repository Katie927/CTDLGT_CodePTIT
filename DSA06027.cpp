#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

void Sort(int arr[], int n){
    vector<vector<int>> ans;
    ans.assign(0, vector<int> (0,0));
    int dem = 0;
    for(int i=0 ; i<n-1 ; i++){
        int tmp = i;
        int ok = 0;
        for(int j = i+1 ; j<n ; j++){
            if(arr[j] < arr[tmp]){
                swap(arr[tmp], arr[j]);
                ok = 1;
            }
        }
        if(ok == 1){
            dem++;
            vector<int> vec;
            for(int j=0 ; j<n ; j++){
                vec.push_back(arr[j]);
            }
            ans.push_back(vec);
        }
    }
    for(int i=dem-1 ; i>=0 ; i--){
        cout<<"Buoc "<<i+1<<": ";
        for(int j=0 ; j<n ; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        Sort(arr, n);
        // for(int i=0 ; i<n ; i++){
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl;
    }
}   

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}