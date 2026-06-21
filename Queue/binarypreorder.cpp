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
        else{
            cout<<temp -> data<<" ";
            if(temp -> left){
                q.push(temp -> left);
            }
            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }
}
    void inorder(node* root){
    if(root == NULL){
        return;
    }
    inorder(root -> left);
    cout<<root -> data<<" ";
    inorder(root -> right);
}


void preorder(node* root){
    if(root == NULL){
        return;
    }
    cout<<root -> data<<" ";
    preorder(root -> left);
    preorder(root -> right);
}


void postorder(node* root){
    if(root == NULL){
        return;
    }
    postorder(root -> left);
    postorder(root -> right);
    cout<<root -> data<<" ";
}

node* buildTree(node* &root){
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
int main(){
    node* root  = NULL;

    buildTree(root);
    levelOrderTraversal(root);
    //create
    // root = buildTree(root);
    // // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // //level order
    // cout<<"level order traversal is:"<<endl;    
    // levelOrderTraversal(root);


    // cout<<"inorder traversal is:\n"<<endl;
    // inorder(root);

    // cout<<"\npreorder traversal is:"<<endl;
    // preorder(root);

    // cout<<"\npostorder traversal is:"<<endl;
    // postorder(root);

    // return 0;
}