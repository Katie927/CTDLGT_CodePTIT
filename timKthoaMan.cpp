#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

vector<int> a;
bool vs[6];

void Try(int n) {
    a.push_back(n);
    for (int i = 0; i <= 5; ++i) {
        if (!vs[i]) {
            vs[i] = true;
            Try(n * 10 + i);
            vs[i] = false;
        }
    }
}

void Prepare() {
    a.push_back(0);
    for (int i = 1; i <= 5; ++i) {
        vs[i] = true;
        Try(i);
        vs[i] = false;
    }
    sort(a.begin(), a.end());
}

void TestCase() {
    int l, r;
    cin >> l >> r;
    int res = upper_bound(a.begin(), a.end(), r) - lower_bound(a.begin(), a.end(), l);
    cout << res;
}

void Dost()
{
    Prepare();
    int test;
    cin>>test;
    while(test--){
        TestCase();
        cout<<endl;
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}