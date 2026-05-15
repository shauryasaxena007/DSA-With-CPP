#include<iostream>
using namespace std;
 class animal{
    public:
    int age;
    int weight;

    public:
    void burk(){
        cout<<"bark"<<endl;
    }
 };

  class human{
    public:
    int color;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
 };
 class hybrid :public animal, public human{
 };

 int main(){
   hybrid H;
    H.speak();
    H.burk();
    return 0;
 }