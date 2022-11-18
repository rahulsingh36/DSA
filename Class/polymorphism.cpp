#include<iostream>
using namespace std;
#include<string.h>

// compile time polymorphism ---- operator overloading
class B{
    public:
    int a;
    int b;

    public:
        void operator- (B &obj){
            int val1 = this->a;
            int val2 = obj.a;
            cout<<"output is "<<val1 +val2<<endl;
        }

}; 
int main(){
    B h1,h2;
    h1.a = 5;
    h2.a = 7;
    
    // operator overloading
    h1 - h2;
}