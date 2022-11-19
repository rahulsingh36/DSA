#include<iostream>
using namespace std;
// creating class 

class Rahul {
private:
    int phoneno;
public:
    char name;
    int rollno;

    // default constructor 

    Rahul(){
        cout<<"Default Constructor called"<<endl;
    }

    // parameterically constructor 
    Rahul(int phoneno ,char name){
        cout<< "this -> "<< this << endl; // this point the address
        this -> phoneno = phoneno; // here this is used for putting the use in the self object value
        this -> name  = name;
    } 
    // copy constructor 
    Rahul(Rahul& temp){  // passing by reference
        this-> phoneno = temp.phoneno;
        this-> name = temp.name;
    }
    void print(){
        cout<<"phone no is "<< this->phoneno<<endl;
        cout<<"name is "<< this->name<<endl;
    }

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
    
    // copy constructor
    
    Rahul d(45,'a');
    d.print();

    Rahul s(d);
    s.print();

    // // object created statically
    // Rahul data(123);
    // cout <<"roll no is "<< &data <<endl;

    // // object created dynamically
    // Rahul *d = new Rahul(345);
    // cout <<"roll no is "<< (d->getphoneno()) <<endl;

    // // // static allocation 

    // Rahul data; // defining object

    // // getting data or we can change data through it
    // data.rollno = 2110991801;
    // data.name = 'R';
    // data.setphoneno(879);

    // // cout<<"the phone no. is "<< data.phoneno <<endl; //we can access it bcz it private
    // cout<<"the phone no. is "<< data.getphoneno() <<endl;
    // cout << "the name is "<<data.name<<endl;
    // cout << "the rollno is "<<data.rollno<<endl;

    // // // dynamic allocation

    // Rahul *d = new Rahul;
    // (*d).setphoneno(879);
    // cout <<"The phone no. is "<<(*d).getphoneno()<<endl;

    // d->setphoneno(678);
    // cout <<"The phone no. is "<< d->getphoneno()<<endl;

    // // both way can be used to get data

} 