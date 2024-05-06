#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#define MAX_ARR_SIZE 107

using namespace std;

//     char c;
//     int k, n;
//     vector<char> x;
//     vector<int> v;
//     vector<vector<int>> ans;

// void Try(int p){
//     for(int i=p ; i<=n ; i++){
//         v.push_back(i);
//         if(v.size() == k){
//             ans.push_back(v);
//         }
//         Try(i);
//         v.pop_back();
//     }
// }

void Dost()
{
    char c;
    int n, k;
    cin >> c >> k;
    n = c - 'A' + 1;
    int a[k + 1];
    for (int i = 1; i <= k; i++)
        a[i] = 1;
    while (1)
    {
        for (int i = 1; i <= k; i++)
            cout << (char)('A' + a[i] - 1);
        cout << endl;
        int ok = 0;
        for (int i = k; i >= 1; i--)
        {
            if (a[i] != n)
            {
                ok = 1;
                a[i]++;
                for (int j = i + 1; j <= k; j++)
                    a[j] = a[i];
                break;
            }
        }
        if (ok == 0)
            break;
    }
}

int main(){
    freopen("CTDL.inp","r",stdin);
    freopen("CTDL.out","w",stdout);
    
    Dost();
    return 0;
}