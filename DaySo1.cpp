#include<iostream>
#include<vector>
#define MAX_ARR_SIZE 1001

using namespace std;

void Quay(int arr[] , int n)
{
    for(int i=0 ; i<n ; i++){
        if(i == 0)  cout<<"[";
        if(i<n-1)       cout<<arr[i]<<" ";
        else            cout<<arr[i]<<"]";
        arr[i] += arr[i+1];
    }
    if(n > 0){
        cout<<endl;
        Quay(arr , n-1);
    }
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int arr[MAX_ARR_SIZE];
        vector<int> vec;

        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        Quay(arr , n);
    }
}

int main(){
    Dost();
    return 0;
}