#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data =d;
       
        this-> next=NULL;
    }
    //destructor
    ~Node(){
        int value = this-> data;
     
        cout<<"free memory of the Node : "<< value<<endl;
    }
};
void insertNode(Node* &tail, int element, int d){
    if(tail== NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        Node* temp = new Node(d);
        temp -> next = curr->  next;
        curr -> next =temp;
    }
}
void print(Node* tail){
    Node* temp =tail;
    do{
        cout<<tail->data<<" ";
        tail= tail-> next;
    }while(tail!= temp);
    cout<<endl;
}
int main(){
    Node* tail =NULL;

    insertNode(tail, 5,3);
    print(tail);

    insertNode(tail, 3,2);
    print(tail);

    insertNode(tail, 2,13);
    print(tail);

    insertNode(tail, 13,45);
    print(tail);

    insertNode(tail, 45,23);
    print(tail);

     insertNode(tail, 2,13);
    print(tail);
      insertNode(tail, 2,12);
    print(tail);
    return 0;
}
