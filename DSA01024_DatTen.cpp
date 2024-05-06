#include<iostream>
#include<set>
#include<vector>
#include<algorithm>

using namespace std;

    int n, k, l;
    set<string> str;
    vector<string> vec;
    int arr[31];
    string s;

void in(int arr[]){
    for(int i=1 ; i<=k ; i++)
        cout<<vec[arr[i] -1]<<" ";
    cout<<endl;
}

void SinhToHop(int i){
    for(int j=1 ; j<=l-k+i ; j++){
        if(j > arr[i-1]){
            arr[i] = j;
            if(i == k)      in(arr);
            else            SinhToHop(i+1);
        }
    }
}

void Dost()
{
    cin>>n>>k;
    cin.ignore();
    while(n--){
        cin>>s;
        str.insert(s);
    }
    for(auto i:str){
        vec.push_back(i);
    }
    l = str.size();
    SinhToHop(1);

    // cout<<l<<endl;
    // for(int i=0 ; i<vec.size() ; i++){
    //     cout<<vec[i]<<endl;
    //     // cout<<arr[i]<<endl;
    // }
}

int main(){
    freopen("CTDL.inp","r",stdin);
    freopen("CTDL.out","w",stdout);

    Dost();
    return 0;
}