#include<stdio.h>
#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
    int *arr;
    int top;
     int size;

     //behave
     Stack(int s){
        this -> size = s;
        arr = new int[size];
        top = -1;

     }
     void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
     }
     void pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
            return;
        }
        else{
            top--;
        }
     }
     int peek(){
     if(top >=0 ){
        return arr[top];  
     }    
      else{
        cout<<"stack is empty"<<endl;
        return -1;
     }
     }
     bool empty(){
        if(top==-1){
            return true;
        }
        else
        {
            return false;
        }
     }
     void display(){
    if(top == -1){
        cout<<"Stack is empty"<<endl;
        return;
    }

    cout<<"Stack elements are: ";
    for(int i = top; i >= 0; i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

};
int main(){
    Stack s(5);
    s.push(4);
    s.push(6);
    s.push(8);
    s.push(10);
    s.push(12);
    s.push(14);
    cout<<"Top element is : "<<s.peek()<<endl;

    // s.pop();
    // cout<<"Top element is : "<<s.peek()<<endl;
    // s.pop();
    // cout<<"Top element is : "<<s.peek()<<endl;
s.display();
    // stack<int> s;

    // //push

    // s.push(4);
    // s.push(6);

    // //pop
    // s.pop();
    
    // cout<<"Top element is : "<<s.top()<<endl;
    // cout<<"Size of stack is : "<<s.size()<<endl;
    // s.pop();
    // cout<<"Is stack empty : "<<s.empty()<<endl;
    // cout<<"Size of stack is : "<<s.size()<<endl;
     return 0;
}