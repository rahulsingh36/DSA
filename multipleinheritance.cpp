#include<iostream>
using namespace std;
class human{
    public:
    char color;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }

    void func(){
        cout<<"i am human";
    }
};

class animal{
    public:
        int age;
    
    void bark(){
        cout<<"barking"<<endl;
    }
    void func(){
        cout<<"i am animal";
    }
};

class hybrid: public animal,public human{

};

int main(){
    hybrid h1;
    h1.bark();
    h1.speak();

    // inhertance ambiguity

    h1.human::func();
    cout<<endl;
    h1.animal::func();
    
}