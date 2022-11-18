#include<iostream>
using namespace std;
#include<string.h>

class Rahul {
private:
    int phoneno;
public:
    char *name;
    int rollno;

    static int timetocomplete;

    static int random(){
        return timetocomplete;
    }
};
 
// initilise of static
int Rahul::timetocomplete = 5;

int main(){
    cout<<Rahul::timetocomplete<<endl;
    Rahul a;
    cout<<a.timetocomplete<<endl;

    cout<< Rahul::random()<<endl;
}