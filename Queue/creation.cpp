#include<iostream>
#include<queue>
using namespace std;

int main(){
    //create
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;
    cout << "Size: " << q.size() << endl;
    q.pop();
    cout<< q.size() << endl;
}