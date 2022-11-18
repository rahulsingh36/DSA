#include<iostream>
using namespace std;
// #include<string.h>

class human{
    public:
        int age;
        int height;
        int weight;

    public:
        int getage(){
            return this->age;
        }
        void setweight(int w){
            this->weight = w;
        }
};
class male: public human { //inheritance calling
    public:
        string color;

    void sleep(){
        cout<<"Male sleeping"<<endl;
    }
};

int main(){
    male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;

    cout<<object1.color<<endl;
    object1.setweight(50);
    object1.sleep();
    cout<<endl; 
    cout<<object1.weight<<endl;

}