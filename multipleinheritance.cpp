#include<iostream>
using namespace std;
class human{
    public:
    char color;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class animal{
    public:
        int age;
    
    void bark(){
        cout<<"barking"<<endl;
    }
};

class hybrid: public animal,public human{

};

int main(){
    hybrid h1;
    h1.bark();
    h1.speak();
    
}