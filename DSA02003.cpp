#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

vector<string> ans;
int vec[11][11];
int n;

void quayLui(int i, int j, string s){
    if(i == n-1 && j == n-1){
        ans.push_back(s);
        return ;
    }
    if(vec[i+1][j] == 1 && i<n-1)
        quayLui(i+1, j, s+"D");
    if(vec[i][j+1] == 1 && j<n-1)
        quayLui(i, j+1, s+"R");
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        cin>>n;
        ans.clear();
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<n ; j++){
                cin>>vec[i][j];
            }
        }
        if(vec[0][0] == 1)      quayLui(0, 0, "");
        if(ans.size() == 0)     cout<<-1<<endl;
        else{
            for(int i=0 ; i<ans.size() ; i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        // for(int i=0 ; i<n ; i++){
        //     for(int j=0 ; j<n ; j++){
        //         cout<<vec[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);

    Dost();
    return 0;
}