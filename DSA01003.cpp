#include<iostream>
#include<vector>
#include<algorithm>
#define MAX_ARR_SIZE 1007

using namespace std;

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int vec[MAX_ARR_SIZE];
        for(int i=0 ; i<n ; i++){
            cin>>vec[i];
        }
        int ok = 0;
        for(int i=n-1 ; i>=0 ; i++){
            if(vec[i] < vec[i+1]){
                ok = 1;
                for(int j = n-1 ; j>i ; j--){
                    if(vec[j] > vec[i]){
                        swap(vec[i], vec[j]);
                        break;
                    }
                }
                sort(vec + i, vec);
                break;
            }
        }
        if(ok = 0){
            for(int i=0 ; i<n ; i++){
                vec[i] = i+1;
            }
        }
        // next_permutation(vec.begin(), vec.begin()+n);
        for(int i=0 ; i<n ; i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    Dost();

    // vector<int> a;
    // int n;  cin>>n;
    // a.resize(n);
    // for(int i=0 ; i<n ; i++){
    //     cin>>a[i];
    // }
    // for(int i=0 ; i<n ; i++){
    //     cout<<a[i]<<" ";
    // }

    return 0;
}