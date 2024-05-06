#include<iostream>
#include<algorithm>

using namespace std;

int n;
int arr[11];

void in(int arr[]){
    for(int i=1 ; i<=n ; i++){
        if(arr[i] == 0)     cout<<'A';
        else                cout<<"B";
    }
    cout<<" ";
}

void SinhNhiPhan(int i){
    for(int j=0 ; j<=1 ; j++){
        arr[i] = j;
        if(i == n)      in(arr);
        else            SinhNhiPhan(i+1);
    }
}

void Dost()
{
    int test;
    cin>>test;
    while(test--){
        cin>>n;
        for(int i=1 ; i<=n ; i++)       arr[i]=0;
        SinhNhiPhan(1);
        cout<<endl;
    }
}

int main(){
    Dost();
    return 0;
}


bool check(int str[], int l){
    for(int i=0 ; i<=l/2 ; i++){
        if( str[i] != str[l-i-1] )
            return false;
    }
    return true;
}
void in(int arr[]){
    if(check(arr, n))
        for(int i=1 ; i<=n ; i++){
            cout<<arr[i]<<" ";
        }
    cout<<" ";
}
void SinhNhiPhan(int i){
    for(int j=0 ; j<=1 ; j++){
        arr[i] = j;
        if(i == n)      in(arr);
        else            SinhNhiPhan(i+1);
    }
}
