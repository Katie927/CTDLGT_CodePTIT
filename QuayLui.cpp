#include<iostream>
#include<vector>
#include<stdlib.h>

using namespace std;

const int MaxN = 1 + 1e5;

int n;
int dem = 0;
bool mark[3][MaxN];     // mark[0][] : Cột
                        // mark[1][] : Đường chéo chính
                        // mark[2][] : Đường chéo phụ
vector<int> res;

void Quay(int row)      // bắt đầu xét từ row = 1;
{   
    if(row > n){
        dem++;
        // exit(0);
    }
    for(int col = 0 ; col<n ; col++){
        int mainDiagonal = row - col + n;
        int subDiagonal = row + col;

        if(mark[0][col] || mark[1][mainDiagonal] || mark[2][subDiagonal])    continue;
        
        // đánh dấu cột, đưuòng chéo đã dùng
        mark[0][col] = 1;
        mark[1][mainDiagonal] = 1;
        mark[2][subDiagonal] = 1;
        
        res.push_back(col);     // nhận vị trí thỏa mãn
        Quay(row + 1);      // tiếp tục xét hàng tiếp theo
        res.pop_back();         
            /* 
                khi hàng không có phần tử thỏa mãn
                xóa vị trí đã lưu của hàng trước đó
            */
           // xóa đánh dấu các cột và đường chéo
        mark[0][col] = 0;
        mark[1][mainDiagonal] = 0;
        mark[2][subDiagonal] = 0;
        // quay lại với hàng trước trường hợp không thỏa mãn
    }
}

int main(){
    freopen("CTDL.inp","r",stdin);
    freopen("CTDL.out","w",stdout);

    int test;
    cin>>test;
    while(test--){
        cin>>n;
        dem = 0;
        Quay(1);    // xét tăng dần từng hàng từ 1 dến n 
        cout<<dem<<endl;
    }
    

    return 0;
}