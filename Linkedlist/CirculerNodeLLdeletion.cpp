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
        int val = this-> data;
     
        cout<<"free memory : "<< val<<endl;
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
    if(tail == NULL){
        cout<<"list is empty"<<endl;
    }
    do{
        cout<<tail->data<<" ";
        tail= tail-> next;
    }while(tail!= temp);
    cout<<endl;
}

void Deletion(Node* &tail, int value){
    if(tail == NULL){
        cout<<"empty"<<endl;
        return;
    }
    else{
        Node* prev = tail;
        Node* curr = prev-> next;

        while(curr->data != value){
            prev=curr;
            curr = curr -> next;
        }
        prev->next = curr-> next;

        //1 node
        if(curr == prev){
            tail= NULL;
        }

        //for 2 node
        else if(tail == curr){
            tail = prev;
        }
        curr -> next =NULL;
        delete curr;
    }
}
int main(){
    Node* tail =NULL;

    // insertNode(tail, 5,3);
    // print(tail);

    // insertNode(tail, 3,2);
    // print(tail);

    // insertNode(tail, 2,13);
    // print(tail);

    // insertNode(tail, 13,45);
    // print(tail);

    // insertNode(tail, 45,23);
    // print(tail);

     insertNode(tail, 23,33);
    print(tail);

    // insertNode(tail, 33,22);
    // print(tail);

    // Deletion(tail,23);
    // print(tail);

    Deletion(tail,33);
    print(tail);
   
    return 0;
}