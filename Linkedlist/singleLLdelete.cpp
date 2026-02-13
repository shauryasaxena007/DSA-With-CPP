  #include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next =NULL;
    }
    //destructor
    ~Node(){
        int Value = this-> data ;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free"<<Value<<endl;
    }

};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp ->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail= temp;
    
}
void insertAtposition(Node* &tail, Node* &head, int position, int d){

    //insert at Start
    if(position==1){
        insertAtHead(head, d);
        return;
    }

    //insert at mid
    int count = 1;
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

    newData -> next = temp ->next;
    temp -> next = newData;
}

//for deletion
void Deletion(int position, Node* &head){
if(position ==1){
 Node* temp = head;
 head = head->next;
 temp-> next = NULL;
 delete temp;
}
else{
    //for del mid or last node
    Node* curr = head;
    Node* prev = NULL;

    int cnt =1;
    while (cnt  <  position){
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    prev->next = curr->next;
      curr->next = NULL;
    delete curr;
}
}

//Traversing
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

    insertAtposition(tail,head, 3,22);
    print(head);

    insertAtposition(tail, head, 4,92);
    print(head);

    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
   
Deletion(1,head);
print(head);

Deletion(4,head);
print(head);
    return 0;
}