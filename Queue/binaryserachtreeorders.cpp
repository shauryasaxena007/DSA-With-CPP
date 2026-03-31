#include<iostream>
#include<queue>
using namespace std;
class node{
public:
int data;
node* left;
node* right;    

node(int d){
    this -> data = d;
    this -> left = NULL;
    this -> right = NULL;
}
};

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

node* insertIntoBST(node* &root, int data){
    if(root == NULL){
        root = new node(data);
        return root;
    }
    if(data < root -> data){
       root -> left = insertIntoBST(root -> left, data);
    }
    else{
      root -> right = insertIntoBST(root -> right, data);
    }
    return root;
}


//minimum value in the BST
node* minValue(node* root){
    node* temp = root;
    while(temp -> left != NULL){
        temp = temp -> left;
    }
    return temp;
}

//maximum value in the BST
node* maxValue(node* root){
    node* temp = root;
    while(temp -> right != NULL){
        temp = temp -> right;
    }
    return temp;
}

node* deleteFromBST(node* &root, int data){
    if(root == NULL){
        return root;
    }
    if(data < root -> data){
        root -> left = deleteFromBST(root -> left, data);
    }
    else if(data > root -> data){
        root -> right = deleteFromBST(root -> right, data);
    }
    else{
        //case 1 : no child
        if(root -> left == NULL && root -> right == NULL){
            delete root;
            return NULL;
        }
        //case 2 : one child
        else if(root -> left != NULL && root -> right == NULL){
            node* temp = root -> left;
            delete root;
            return temp;
        }
        else if(root -> left == NULL && root -> right != NULL){
            node* temp = root -> right;
            delete root;
            return temp;
        }
        //case 3 : two children
        else{
            int mini = minValue(root -> right) -> data;
            root -> data = mini;
            root -> right = deleteFromBST(root -> right, mini);
            return root;
        }
    }
}
void takeInput(node* &root){
    int data;
     cin>>data;
    
     while(data != -1){
         root =insertIntoBST(root, data);
         cin>>data;
     }
}
int main(){
    node* root =NULL;
    cout<<"Enter the data for root node "<<endl;
    takeInput(root);

    cout<<" \n printing the level order traversal output "<<endl;   
    levelOrderTraversal(root);

    cout<<" \n printing the inorder traversal output "<<endl;
    inorder(root);

    cout<<" \n printing the preorder traversal output "<<endl;
    preorder(root);

    cout<<" \n printing the postorder traversal output "<<endl;
    postorder(root);

    cout<<" \n minimum value in the BST is "<<minValue(root) -> data<<endl;
    cout<<" \n maximum value in the BST is "<<maxValue(root) -> data<<endl;
    return 0;
}