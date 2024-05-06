#include<iostream>
#include<vector>

using namespace std;

void Dost(){
    int test;
    cin>>test;
    while(test--){
        int n,k;
        cin>>n>>k;
        vector<int> vec;
        vec.resize(k+1);
        vec[0] = -1;
        for(int i=1 ; i<=k ; i++){
            cin>>vec[i];
        }
        for(int i = k ; i>=0 ; i--){
            if(vec[i]<n-k+i){
                vec[i]++;
                for(int j=i+1 ; j<=k ; j++){
                    vec[j] = vec[j-1] + 1;
                }
                break;
            }
        }
        for(int i=1 ; i<=k ; i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    freopen("CTDL.in","r",stdin);
    freopen("CTDL.out","w",stdout);
    Dost();
    return 0;
}

// void sinhToHop(int arr[], int n, int k){
//     for(int i = k ; i>=0 ; i--){
//             if(arr[i]<n-k+i){
//                 arr[i]++;
//             for(int j=i+1 ; j<=k ; j++){
//                 arr[j] = arr[j-1] + 1;
//             }
//             break;
//         }
//     }
// }