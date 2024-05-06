#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<deque>
#define MAX_ARR_SIZE 27

using namespace std;

    int n;
    string k;
    int arr[27];
    vector<int> x;
    vector<string> v;
    vector<vector<int>> ans;

void Try(int posa){
    for(int i=posa+1 ; i<=n ; i++){
        if(arr[i] > arr[posa]){
            x.push_back(arr[i]);
            if(x.size() > 1){
                ans.push_back(x);
            }
            Try(i);
            x.erase(x.end()-1, x.end());
        }
    }
}

void Dost()
{
    cin>>n;
    arr[0] = 0;
    for(int i=1 ; i<=n ; i++){
        cin>>arr[i];
    }
    Try(0);
    for(int i=0 ; i<ans.size() ; i++){
        k = "";
        for(int j=0 ; j<ans[i].size() ; j++){
            k += to_string(ans[i][j]);
            k += " ";
        }
        v.push_back(k);
    }
    sort(v.begin(), v.end());
    for(int i=0 ; i<v.size() ; i++)
        cout<<v[i]<<endl;
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}


// void Try(int posa)
// {
//     for (int i = posa + 1; i <= n; i++)
//     {
//         if (a[i] > a[posa])
//         {
//             x.push_back(a[i]);
//             if (x.size() > 1)
//                 ans.push_back(x);
//             Try(i);
//             x.erase(x.end() - 1, x.end());
//         }
//     }
// }
