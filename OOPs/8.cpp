#include<iostream>
using namespace std;

class A{
    public:
    void func1(){
        cout<<"inside"<<endl;
    }
};
class B :public A{
    public:
    void func2(){
        cout<<"outside"<<endl;
    }
};
class D {
    public:
    void funcN(){
        cout<<"Dside"<<endl;
    }
};
class C : public A, public D{
    public:
    void func3(){
        cout<<"externside"<<endl;
    }
};
int main(){
    A ob;
    ob.func1();

    B obj;
    obj.func1();
    obj.func2();


    C objec;
    objec.func1();
        objec.func3();
        objec.funcN();

    D ob1;
    ob1.funcN();
    return 0;
}