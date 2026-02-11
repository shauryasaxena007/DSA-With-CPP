
#include<iostream>
using namespace std;
class human{
    public:
        int height;
        int weight;
        int age;
    public:
        int getAge(){
        return this->age;
        }
        int setWeight(int w){
         this->weight = w;
        }

};
class Male : public human{
    public:
    string color;
    void sleep(){
        cout<<"7 hours sleep"<<endl;
    }
};
int main(){
    Male first;
    cout<<"done is age : "<<first.age<<endl;
       cout<<"done is height : "<<first.height<<endl;
       cout<<"done is weight : "<<first.weight<<endl;
       cout<<"done is color : "<<first.color<<endl;
    first.sleep();

    first.setWeight(66);
    cout<<"weight is :"<<first.weight<<endl;
    return 0;
}