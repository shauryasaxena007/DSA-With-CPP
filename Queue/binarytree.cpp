#include<iostream>
#include<queue>
using namespace std;
class node{
public:
int data;
node* left;
node* right;


node(int d){
   this -> data=d;
    this ->left=NULL;
   this -> right=NULL;
}
};

node* buildTree(node* root){
    cout<<"enter a data of a node:"<< endl;
    int data;
    cin>> data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }
    cout<<"enter in left"<<data<<endl;
    root -> left = buildTree(root -> left);
    cout<<"enter in right"<<data<<endl;
    root -> right = buildTree(root -> right);
    return root;

}
void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        
    }
}
    

int main(){
    node* root  = NULL;
    //create
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    //level order
    cout<<"level order traversal is:"<<endl;    
    levelOrderTraversal(root);
    return 0;
}