#include<iostream>
#include<cstring>
using namespace std;
class Hero{
    private:
    int health;

    public:
    char level;
    char *name;

    Hero(){
        cout<<"Simple constructor called"<<endl;
        name = new char[100];
    }
    //parameterized constructor
    Hero(int health, char level){
        this->level=level;
        this->health=health;
    }

    //copy const
    Hero(Hero& temp){             //use pass by reference not value because stuck in infinite loop
        cout<<"copy const called"<<endl;
        this->level = temp.level;
        this->health = temp.health;
    }
    void print(){
        cout<<"Health : "<<health<<endl;
        cout<<"level : "<<level<<endl;
    }

    void setName(char name[]){
        strcpy(this->name, name);
    }
};
    int main(){
    Hero suresh(60,'c');
    suresh.print();


    // copy constructor
    Hero Rh(suresh);
    Rh.print();
    return 0;
}
