#include<iostream>
using namespace std;
class A{
    public:
   void func(){
        cout<<"hii"<<endl;
    }
};

class B{
    public:
   void func(){
        cout<<"hello"<<endl;
    }
};
class C : public A, public B{

};
int main(){
     C ob;
    ob.A::func();
    ob.B::func();
    return 0;

}