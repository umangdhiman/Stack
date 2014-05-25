#include<iostream>
#include<stdlib.h>
using namespace std;
#define SIZE 10     //size for array
class stack{
public:
    int array[SIZE];
    int top;    //indicates topmost element of stack
    stack(){    //constructor to initialize top value
        top = -1;
    }
    void push(int x){   // function to push data onto stack
        top++;
        array[top]=x;   //element added to stack’s top
    }
    int pop(){      //function to pop data from stack
        int x;      //variable to store popped value
        x=array[top];   //element removed from stack’s top
        top--;
        return x;
    }
    int peek(){     // function to peek topmost element
        int x;      //variable to store peeked value
        x=array[top];
        return x;
    }
    void show_stack(){  // function to see stack elements
        int i;
        cout<<"\n";
        for(i=top;i>=0;i--){
            cout<<array[i]<<"\n"; //elements of stack printed
        }
    }
    int isstackempty(){     // function to check underflow condition
        if(top==-1)
            return 1;
        else
            return 0;
    }
    int isstackfull(){      // function to check overflow condition
        if(top==SIZE-1)
            return 1;
        else
            return 0;
    }
};
int main(){
    int choice,ele;
    stack st1;
    while(1){
        cout<<"enter 1 for push,2 for pop,3 for peek,4 for show,5 for exit:\n";
        cin>>choice;
        switch(choice){
        case 1:     //to push data
            cout<<"enter the element to push\n";
            cin>>ele;
            if(st1.isstackfull()==0){
                st1.push(ele);
            }
            else{
                cout<<"sorry stack is full\n";
            }
            break;
        case 2:     //to pop data
            if(st1.isstackempty()==0){
                ele=st1.pop();
                cout<<"element popped is "<<ele<<"\n";
            }
            else{
                cout<<"sorry stack is empty\n";
            }
            break;
        case 3:     //to peek topmost element
            if(st1.isstackempty()==0){
                ele=st1.peek();
                cout<<"element peeked is "<<ele<<"\n";
            }
            else{
                cout<<"sorry stack is empty\n";
            }
            break;
        case 4:     //to show stack contents
            if(st1.isstackempty()==0){
                st1.show_stack();
            }
            else{
                cout<<"sorry stack is empty\n";
            }
            break;
        case 5:
            exit(0);
        }
    }
return 0;
}

