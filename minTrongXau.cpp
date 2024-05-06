#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#define MAX_ARR_SIZE 107

using namespace std;
map<int,int> m;
void testCase() {
    int k; cin >> k;
    string s; cin >> s;
    int dd[127] = {};
    for (char i : s) dd[i]++;
    priority_queue<int> q;
    for (int i : dd) {
        if (i > 0) q.push(i);
    }
    while (k--) {
        if (q.empty()) break;
        int x = q.top(); q.pop();
        x--;
        q.push(x);
    }
    long long ans = 0;
    while (!q.empty()) {
        long long x = q.top(); q.pop();
        ans += x * x;
    }
    cout << ans;
}

void Dost()
{
    int test;
    cin>>test;
    cin.ignore();
    while(test--){
        testCase();
        cout << "\n";
    }
}

int main(){
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}