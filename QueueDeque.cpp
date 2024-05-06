#include<iostream>
#include<queue>
#include<deque>

using namespace std;

void HangDoi()
{
    // queue : hang doi la cau truc du lieu dang "FirstInFirstOut"
    queue<int> q1;
    queue<int> q2;
    // them ptu vao queue
    q1.push(1);
    q1.push(3);
    q1.push(5);      
    q1.push(7);         // q co gia tri [1, 3, 5, 7]

    //in ptu dau tien trong queue
    cout<<"Ptu dau tien trong queue : "<<q1.front()<<endl;
    // kich thuoc 
    cout<<"Kich thuoc cua queue : "<<q1.size()<<endl;

    // loai bo ptu dau tien 
    q1.pop();        //khi nay queue la [3, 5]
    // kiem tra queu co rong hay khong
    if(q1.empty())       cout<<"Queue khong rong "<<endl;
    else                cout<<"Queue rong"<<endl;

    cout<<"Ptu dau sau khi 'pop' : " <<q1.front()<<endl;
    cout<<"Kich thuoc : "<<q1.size()<<endl;
    q1.swap(q2);
    cout<<"Size q1 : "<<q1.size();
    cout<<"\nSize q2 : "<<q2.size();
}

void Nganxep()
{
    deque<int> dq1;
    // them ptu vao cuoi deque
    dq1.push_back(3);
    dq1.push_back(6);        //  dq1 : [3, 6]
    // them ptu vao dau deque
    dq1.push_front(4);          // dq1 : [4, 3 ,6]
    dq1.push_front(2);          // dq1 : [2, 4, 3, 6]

    cout<<"Kich thuoc (size) cua dq1 : "<<dq1.size()<<endl;
    cout<<"Ptu dau trong dq1 : "<<dq1.front()<<endl;
    cout<<"Ptu cuoi trong dq1 : "<<dq1.back()<<endl;

    // xoa ptu trong deque
    dq1.pop_front();        // dq1 : [4, 3, 6]
    dq1.pop_front();        // dq1 : [4, 3]

    cout<<"Kich thuoc dq1 sau khi 'pop' : "<<dq1.size();

    deque<int> dq2; 
    // dq1.swap(dq2)
    //

}

int main(){
    freopen("CTDL.inp","r",stdin);
    freopen("CTDL.out","w",stdout);
    
    //HangDoi();

    Nganxep();
    
    return 0;
}
