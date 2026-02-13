#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this->data =d;
        this->prev =NULL;
        this-> next=NULL;
    }
};
void print(Node*head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}

int getLength(Node*head){
    int len =0;
    Node* temp = head;
    while(temp!=NULL){
    len++;
        temp=temp->next;

    }
    return len;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail-> next = temp;
    temp -> prev = tail;
    tail = temp;
}

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp-> next = head;
    head -> prev = temp;
    head = temp;
}

void insertAtposition(Node* &tail, Node* &head, int position, int d){

    //insert at Start
    if(position==1){
        insertAtHead(head, d);
        return;
    }

    //insert at mid
    int count = 0;
    Node* temp = head;

    while(count<position-1){
        temp = temp->next;
        count++;
    }

    //insert at last
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }
    //create node for new data
    Node* newData = new Node(d);
    newData-> next = temp ->next;
    temp-> next -> prev = newData;
    temp-> next= newData;
    newData -> prev = temp;   
}
int main(){
    Node* node1 = new Node(10);
    Node*head = node1;
    Node* tail = node1;
    print(head);
    cout<<getLength(head)<<endl;

    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail, 53);
    print(head);

    insertAtTail(tail, 15);
    print(head);

    insertAtposition(tail, head,2, 125);
    print(head);
    insertAtposition(tail, head,5, 25);
    print(head);
    return 0;
}