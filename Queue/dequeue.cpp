#include<iostream>
#include<queue>
using namespace std;

int main(){
    deque<int> q;
    q.push_front(12);
    q.push_back(1);

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    q.pop_front();
    cout<<q.front()<<endl;

    q.pop_back();
    cout<<q.back()<<endl;

    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }
    return 0;
}