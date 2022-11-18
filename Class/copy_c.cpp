#include<iostream>
using namespace std;
#include<string.h>
 
class Rahul {
private:
    int phoneno;
public:
    char *name;
    int rollno;

    // default constructor 

    Rahul(){
        cout<<"Default Constructor called"<<endl;
        name = new char[100];
    }

    // copy constructor  == Deapcopy
    Rahul(Rahul& temp){  // passing by reference
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch,temp.name);
        this->name = ch;

        this-> phoneno = temp.phoneno;
        this-> rollno = temp.rollno;
    }

    void print(){
        cout<<"phone no is "<< this->phoneno<<endl;
        cout<<"name is "<< this->name<<endl;
        cout<<"The roll no is "<< this->rollno<<endl;
    }
    // accessing private data
    int getphoneno(){
        return phoneno;
    }
    void setphoneno(int phone){
        phoneno = phone;
    }
    
    int getrollno(){
        return rollno;
    }

    void setrollno(int roll){
        rollno = roll;
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }
};

int main(){
    Rahul data;
    data.setphoneno(123);
    data.setrollno(879);
    char name[7] = "Rahul";
    data.setName(name);

    data.print();
    cout<<endl;

    Rahul data1(data);
    data1.print();
    cout<<endl;

    data.name[0] = 's';
    // data.print(); 
    // cout<<endl;

    data1.print();
}