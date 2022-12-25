#include <iostream>
using namespace std;

void replaceSpaces(string input,string value)
{
    for(int i=0 ; i<input.length() ; i++)
    {
        if(input[i] == ' ')
            input.replace(i,3,value);
    }
    cout<<input;
}

int main(){
string name = "Lakshpreet   is Love";
string value = "@80";
replaceSpaces(name, value);
}