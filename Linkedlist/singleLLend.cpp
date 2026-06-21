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

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail= temp;
    
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
    Node* tail = node1;
    print(head);

    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail, 52);
    print(head);

     cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    return 0;
}