#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define const MAX_ARR_SIZE 11;

using namespace std;

int n;
int dem = 0;
bool mark[3][107];      // mark[0][] : Cột
                            // mark[1][] : Đường chéo chính
                            // mark[2][] : Đường chéo phụ
vector<int> res;

void Try(int row){
    if(row > n){
        dem++;
        // exit(0);
    }
    for(int col = 0; col<n ; col++){
        int mainDiagonal = row - col +n;
        int subDiagonal = row + col;
        if(mark[0][col] || mark[1][mainDiagonal] || mark[2][subDiagonal])   continue;

        mark[0][col] = 1;
        mark[1][mainDiagonal] = 1;
        mark[2][subDiagonal] = 1;

        Try(row+1);

        mark[0][col] = 0;
        mark[1][mainDiagonal] = 0;
        mark[2][subDiagonal] = 0;
    }
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        cin>>n;
        dem = 0;
        Try(1);
        cout<<dem<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}