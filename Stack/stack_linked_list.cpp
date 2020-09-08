#include<iostream>

using namespace std;
class Node{
   
    public:
        int data;
        Node *next;
};

class Stack{

    private :
        Node *top;

    public:
        Stack(){top=NULL;}
        void push(int x);
        int pop();
        void Display();


};


void Stack:: push(int x){
    Node *t= new Node;
    if(t==NULL){ cout<<"stack full\n"; }
    else{
        t->data = x;
        t->next =top;
        top =t;
    }
}

int Stack::pop(){
    Node *t= new Node;
    int x;
    if(top==NULL){ cout<<"stack empty\n"; }
    else{
        t =top;
        top = top->next;
        x = t->data;
        delete t;      
    }
    return x;
}

void Stack::Display(){
    Node *t= top;
    while(t!=NULL){
        cout<<t->data<<"-> ";
        t = t->next;
    }


}


int main(){
    Stack stk;

    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.Display();
    cout<< stk.pop();

}