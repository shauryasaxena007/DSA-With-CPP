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
 class bulldog : public Dog{

 };
 int main(){
    bulldog b;
    Dog d;
    d.speek();
    b.speek();
    return 0;
 }