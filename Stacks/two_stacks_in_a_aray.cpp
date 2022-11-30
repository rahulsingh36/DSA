#include <bits/stdc++.h>
using namespace std;
class TwoStack{
    int *arr;
    int top1;
    int top2;
    int size;

    public:
        TwoStack(int size){
            this->size = size;
            top1 = -1;
            top2 = size;
            arr = new int(size);
        }
        void push1(int element){
            if(top2 - top1 >1 ){
                top1++;
                arr[top1] = element;
            }
            else{
                cout << "Stack Overflow"
                 << " By element : " << element << endl;
                 return;
            }
        }
        void push2(int element){
            if(top2 - top1 >1){
                top2--;
                arr[top2] = element;
            }
            else{
                cout << "Stack Overflow"
                 << " By element : " << element << endl;
                 return;
            }
        }
        int pop1(){
            if(top1>=0){
                int ans = arr[top1];
                top1--;
                return ans;
            }
            else{
                return -1;
            }
        }
        int pop2(){
            if(top2 <= size){
                int ans = arr[top2];
                top1++;
                return ans;
            }
            else{
                return -1;
            }
        }
};
int main(){
    int n= 5;
    TwoStack st(n);

    st.push1(20);
    st.push2(10);
    st.push1(50);
    st.push2(40);
    st.push1(80);
    
    cout << "Popped element from stack1 is "
         << ": " << st.pop1() << endl;
    st.push2(40);
    st.push1(99);
    cout << "Popped element from stack2 is "
         << ": " << st.pop2() << endl;

}