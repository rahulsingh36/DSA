#include<iostream>
using namespace std;
#include<string.h>

class A{
    public:
    void show(){
        cout<<"Inside A"<<endl;
    }
};

class B: public A{
    public:
    void show(){
        cout<<"Inside B"<<endl;
    }
};
class c: public A{
    public:
    void show(){
        cout<<"Inside C"<<endl;
    }
}; 

int main(){
    A c1;
    B c2;
    c1.show();
    c2.show();

}