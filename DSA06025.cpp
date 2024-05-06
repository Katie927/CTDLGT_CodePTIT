#include<iostream>
#include<set>

using namespace std;

void Dost()
{
    int n;
    cin>>n;
    multiset<int> st;
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        st.insert(x);
        cout<<"Buoc "<<i<<":";
        for(auto x:st){
            cout<<" "<<x;
        }
        cout<<endl;
    }
}

int main(){
    Dost();
    return 0;
}