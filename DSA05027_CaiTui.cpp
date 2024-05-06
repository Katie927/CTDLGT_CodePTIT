#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

int n, m;
struct uta      // struct để lưu giá trị sử dụng và khối lượng vật
{
    long w, val;
};
uta a[1001];
bool cmp(uta a, uta b){
    return (float)a.val/a.w > (float)b.val/b.w;         
    // sắp xếp các đồ vật theo chiều ưu tiên về giá trị sử dụng
}

long Try(int i, long w, long val){
    if(w>m)     return 0;
    if(i == n && w<=m)
        return val;
    long l = Try(i+1, w+a[i].w, val+a[i].val);  
    // ghi nhận đồ vật trong túi, xét đồ vật tiếp theo và tăng trọng lượng đã có trong túi
    long r = Try(i+1, w, val);
    // không ghi nhận đồ vật, xét đồ vật tiếp theo
    return max(l, r);
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        cin>>n>>m;
        for(int i=0 ; i<n ; i++){
            cin>>a[i].w;
        }
        for(int i=0 ; i<n ; i++){
            cin>>a[i].val;
        }

        sort(a, a+n, cmp);
        cout<<Try(0, 0, 0)<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}