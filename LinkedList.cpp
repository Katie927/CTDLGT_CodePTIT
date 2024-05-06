#include<iostream>

using namespace std;

// Linked List là một CTDL gồm
                  ///  tập hợp các nút cùng thể hiện 1 dãy

struct Node
{
    int data;
    Node *prv, *nxt;

    Node(int _data)
    {
        data = _data;
        prv = NULL;
        nxt = NULL;
    }
};

struct LinkedList
{
    Node *head;
    int sz = 0;

    void addNewNode(int pos , int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            sz++;
            return ;
        }

        if(pos == 1){       // chen vao dau list
            newNode->nxt = head;
            head->prv = newNode;
            head = newNode;
            sz++;
            return;
        }

        if(pos == sz + 1){    // chen vao sau ptu cuoi 
            Node* temp = head;  //Node temp sau do se la Node cuoi
            while(temp->nxt != NULL)  temp = temp->nxt;
            newNode->prv = temp;
            temp->nxt = newNode;
            sz++;
            return ;
        }

        int count = 1;
        Node* temp = head;     // temp sau do se o vi tri pos
        while(count < pos){
            temp = temp->nxt;
            count++;
        }

        newNode->nxt = temp;
        newNode->prv = temp->prv;
        newNode->prv->nxt = newNode;
        temp->prv = newNode;
        sz++;
    }

    void deleteNode(int pos){
        Node* temp = head;

        if(sz == 1){
            head = NULL;
            sz--;
            return ;
        }

        int count = 1;
        while(count < pos){
            temp = temp->nxt;
            count++;
        }

        if(pos == 1){       // xoa Node dau
            temp->nxt->prv = NULL;
            head = temp->nxt;
            sz--;
            return ;
        }

        if(pos == sz){      // xoa Node cuoi
            temp->prv->nxt = NULL;
            sz--;
            return ;
        }

        temp->prv->nxt = temp->nxt;
        temp->nxt->prv = temp->prv;
        sz--;
    }

    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->nxt;
        }
        cout<<endl;
    }

} LinkedList;


int main(){
    // freopen("CTDL.out","w",stdout);

    LinkedList.addNewNode(1, 3); 
    // [3]
    LinkedList.addNewNode(2, 5);
    // [3, 5]
    LinkedList.addNewNode(2, 7);
    // [3, 7, 5]
    LinkedList.print();
    LinkedList.deleteNode(2);
    // [3, 5]
    LinkedList.print();
    LinkedList.deleteNode(2);
    // [3]
    LinkedList.print();
    LinkedList.deleteNode(1);
    // []
    LinkedList.print();

    return 0;
}