// class define 

#include<iostream>
using namespace std;
// creating class 

class Rahul {
private:
    int phoneno;
public:
    char name;
    int rollno;

    // accessing private data
    int getphoneno(){
        return phoneno;
    }

    void setphoneno(int phone){
        phoneno = phone;
    }
};

int main(){
// define object for the class 
 
    // // static allocation 

    Rahul data; // defining object

    // getting data or we can change data through it
    data.rollno = 2110991801;
    data.name = 'R';
    data.setphoneno(879);

    // cout<<"the phone no. is "<< data.phoneno <<endl; //we can access it bcz it private
    cout<<"the phone no. is "<< data.getphoneno() <<endl;
    cout << "the name is "<<data.name<<endl;
    cout << "the rollno is "<<data.rollno<<endl;

    // // dynamic allocation

    Rahul *d = new Rahul;
    (*d).setphoneno(879);
    cout <<"The phone no. is "<<(*d).getphoneno()<<endl;

    d->setphoneno(678);
    cout <<"The phone no. is "<< d->getphoneno()<<endl;

    // both way can be used to get data

} 