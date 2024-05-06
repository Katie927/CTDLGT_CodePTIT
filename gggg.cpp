#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

void nhap(vector<vector<int>> &vec, int n){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cin>>vec[i][j];
        }
    }
}
void xuat(vector<vector<int>> &vec, int n){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<vec[i][j];
        }
        cout<<endl;
    }
}

void Dost()
{
    int n;
    cin>>n;
    vector<vector<int>> vec;
    vec.resize(n, vector<int> (n));
    nhap(vec,n);
    xuat(vec,n);
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);

    Dost();
    return 0;
}