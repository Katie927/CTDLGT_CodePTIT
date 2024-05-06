#include<iostream>
#include<stack>
#include<string>

using namespace std;

void Dost()
{
    stack<int> st;
    string command;
    while(cin>>command){
        if(command == "push"){
            int n;
            cin>>n;
            st.push(n);
        }
        else if(command == "pop"){
            st.pop();
        }
        else if(command == "show"){
            if(st.empty()){
                cout<<"empty\n";
                continue;
            }
            else{
                stack<int> tmp;
                while(!st.empty()){
                    tmp.push(st.top());
                    st.pop();
                }
                while(!tmp.empty()){
                    cout<<tmp.top()<<" ";
                    st.push(tmp.top());
                    tmp.pop();
                }
                cout<<endl;
                
            }
        }
    }
    
}

int main(){
    Dost();
    return 0;
}