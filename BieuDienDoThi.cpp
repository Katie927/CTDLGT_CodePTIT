#include<bits/stdc++.h>

using namespace std;

void Dost()
{
    int dinh, canh;
    
    cin>>dinh;          cin>>canh;
    cout<<"So canh : "<<canh<<" | ";          
    cout<<"So dinh : "<<dinh<<" ";          
    cout<<endl;
    int arr[13][13] = {};   // mang2 chieu luu ma tran ke   
    vector<vector<int>> dsKe;     // vector 2 chieu luu danh sach ke
    dsKe.resize(dinh+1 , vector<int> (0));

    cout<<"Danh sach canh : "<<endl;
    for(int i=1 ; i<=canh ; i++){
        int x, y;
        cin>>x>>y;
        cout<<x<<" "<<y<<endl;
    // do thi vo huong
            // ma tran ke
        arr[x][y] = 1;      
        arr[y][x] = 1;
            // danh sach ke
        dsKe[x].push_back(y);
        dsKe[y].push_back(x);
    }

    // in ma tran ke
    cout<<"Ma tran ke : "<<endl;
    for(int i=1 ; i<=dinh ; i++){
        for(int j=1 ; j<=dinh ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // in danh sach ke
    cout<<"Danh sach ke : "<<endl;
    int d = 0;
    for(int i=1 ; i< canh ; i++){
        d += dsKe[i].size();
        cout<<d<<" : ";
        for(int j=0 ; j<dsKe[i].size() ; j++){
            cout<<dsKe[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    freopen("CTDL.inp","r",stdin);
    freopen("CTDL.out","w",stdout);

    Dost();
    return 0;
}
