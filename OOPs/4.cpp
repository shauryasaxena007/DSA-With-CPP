#include<iostream>
using namespace std;
 class animal{
    public:
    int age;
    int weight;

    public:
    void speek(){
        cout<<"bark"<<endl;
    }
 };
 class Dog :public animal{

 };
 int main(){
    Dog d;
    d.speek();
    return 0;
 }