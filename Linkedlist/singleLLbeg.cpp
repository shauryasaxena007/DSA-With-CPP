#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constructer
    Node(int data){
        this->data=data;
        this->next =NULL;
    }

};
void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp ->next = head;
    head = temp;
}


//traversing
void print(Node* &head){
    Node* temp= head;
    while(temp != NULL){
        cout<<temp ->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node* node1 = new Node(10);
   
    //head point to node
    Node* head = node1;
   
    print(head);

    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 52);
    print(head);

     cout<<"Head : "<<head->data<<endl;
     return 0;
}