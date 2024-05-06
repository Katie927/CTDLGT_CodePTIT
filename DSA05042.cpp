#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;
// sử dụng một mảng phụ lưu tổng của các phần tử từ 0 đến i
bool sumk(long long n, long long k, vector<long long> &vec){
    long long sum = 0;
    long long tmp = 0;
    vec.push_back(sum);
    for(int i=1 ; i<=n ; i++){
        long long x;
        cin>>x;
        sum+=x;
        vec.push_back(sum);
    }
    for(int i=1 ; i<=n ; i++){
        // đối với mỗi phần tử thứ i, tìm kiếm trong khoảng i+i dến n một vị trí j mà tại đó
        // tổng các phần tử từ i đến j bằng k
        if(binary_search(vec.begin() +i , vec.end(), vec[i-1] +k))  return 1;
    }
    return 0;
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        long long n, k;
        cin>>n>>k;
        vector<long long> vec;
        vec.resize(0);
        if( sumk(n, k, vec) )       cout<<"YES"<<endl;
        else                        cout<<"NO"<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}