#include<iostream>
#include<stack>
#include<string>

using namespace std;

void Dost()
{
    stack<int> st;
    int q;
    cin>>q;
    string command;
    while(q--){
        cin>>command;
        if(command == "PUSH"){
            int n;
            cin>>n;
            st.push(n);
        }
        else if(command == "POP"){
            if(!st.empty())     st.pop();
        }
        else if(command == "PRINT"){
            if(st.empty()){
                cout<<"NONE\n";
                continue;
            }
            else{
                // stack<int> tmp;
                // while(!st.empty()){
                //     tmp.push(st.top());
                //     st.pop();
                // }
                // cout<<tmp.top();
                // while(!tmp.empty()){
                //     st.push(tmp.top());
                //     tmp.pop();
                // }
                cout<<st.top();
                cout<<endl;
            }
        }
    }
    
}

int main(){
    Dost();
    return 0;
}