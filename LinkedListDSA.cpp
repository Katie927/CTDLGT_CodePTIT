#include<bits/stdc++.h>
using namespace std;

#define test() int t; cin >> t; while (t--)
#define  ll long long
const long long e = 1000000007;

struct Node {
	int data;
	struct Node *next;
};
struct Node* head = NULL;

void insert (int new_data){
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	new_node -> data = new_data;
	new_node -> next = head;
	head = new_node;
}

void display(){
	struct Node* ptr;
	ptr = head;
	while ( ptr != NULL){
		cout<< ptr->data <<" ";
		ptr = ptr ->next;
	}
	cout<<endl;
}

void insert_position(int pos, int value){
	Node *pre = new Node;
	Node *cur = new Node;
	Node *tmp = new Node;
	cur = head;
	for(int i = 1; i<pos ; i++){
		pre = cur;
		cur = cur->next;
	}	
	tmp -> data=value;
	pre -> next=tmp;
	tmp -> next=cur;
}

void delete_position(int pos){
	Node *current = new Node;
	Node *previous = new Node;
	current = head;
	for(int i=1 ; i<pos ; i++){
		previous = current;
		current = current->next;
	}
	previous->next = current->next;
}

void Dost(){
	insert(4);
	insert(7);
	insert(2);
	insert(9);
	cout<<"list ban dau:";
	display();
	int n, m;
	cout<<"vi tri can them: ";		cin>>n;
	cout<<"phan tu can them: ";		cin>>m;
	insert_position(n,m);
	cout<<"sau khi them: " ;
	display();
	int t;
	cout<<"vi tri can xoa: ";	cin>>t;
	delete_position(t);
	cout<<"sau khi xoa: ";
	display();
}
int main(){
	Dost();
	return 0;
}

