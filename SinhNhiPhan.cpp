#include <iostream>
 
using namespace std;
 
int N;
 
int x[100];

bool check(int arr[]){
    // if(arr[1] == 0 || arr[N] == 1)  return 0;
    // else{
    //     for(int i=1 ; i<=N-1 ; i++){
    //         if(arr[i] == 1 && arr[i] == arr[i+1])   return 0;
    //         else if(arr[i] == 0 && arr[i] == arr[i+1] && arr[i] == arr[i+2] && arr[i] == arr[i+3] && i<=N-3)
    //             return 0;
    //     }
    // }
    return 1;
}
 
void in(int x[]){
    if(check(x)){
        for (int i = 1; i <= N; i++){
            cout<<x[i];
        }
        cout << "\n";
    }
}
void deQuy(int i){
    for (int j = 0; j <= 1; j++){
        x[i] = j;
        if (i == N)
            in(x);
        else
            deQuy(i + 1);
    }
}
 
int main(){
    freopen("CTDL.out","w",stdout);

    cin >> N;
    deQuy(1);
    return 0;
}