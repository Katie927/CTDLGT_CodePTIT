#include<iostream>
#include<math.h>
#include<string>

#define MAX_ARR_SIZE 1001

using namespace std;

// string decToBin(int n){
//     string ans = "";
//     while (n > 0) {
//         ans = char (n % 2 + '0') + ans;
//         n /= 2;
//     }
//     while (ans.length() < N)
//         ans = "0" + ans;
//     return ans;
// }

void SinhNhiPhan(int len)
{
    string arrS[MAX_ARR_SIZE];
    int x = 2;
    arrS[0] = "0";
    arrS[1] = "1";
    int k = 0;
    while(arrS[k].length() < len){
        arrS[x++] = arrS[k] + "0";
        arrS[x++] = arrS[k] + "1";
        k++;
    }
    // // for(int i=k ; i<x ; i++){
    // //     cout<<arrS[i]<<endl;
    // // }
    // cout<<arrS[k][1];

    for(int i=k ; i<x ; i++){
        for(int j=0 ; j<arrS[i].length() ; j++){
            cout<<arrS[i][j]<<" ";
        }
        for(int j=arrS[i].length()-1 ; j>=0 ; j--){
            cout<<arrS[i][j]<<" ";
        }
        cout<<endl;
    }

}

void Dost()
{
    int n;
    cin>>n;
    SinhNhiPhan(n/2);
}

int main(){
    Dost(); 
    return 0;
}