#include<stdio.h>
#include<iostream>
#ifndef QueueCpp_h
#define QueueCpp_h

using namespace std;

class Node{
    public:
    Node *lchild;
    int data;
    Node *rchild;
};

class Queue{
    private:
        int size;
        int front;
        int rear;
        Node **Q;
    public:
        Queue(int size);
        void create(int size);
        void enqueue(Node* x);
        Node* dequeue();
        int isEmpty(){return front==rear;}

        void display();
};



Queue::Queue(int size){
    size = this->size;
    front = -1;
    rear = -1;
    Q = new Node*[size];
}

void Queue::enqueue(Node * x){

    if(rear == size-1){
        cout<<"Queue full\n";
    }
    else{
        rear++;
        Q[rear] = x;
    }

}



Node* Queue::dequeue(){
    Node *x=NULL;
        if(front==rear){
        cout<<"Queue empty\n";
    }
    else{
        x = Q[front+1];
        front++;
    }
    return x;

}

void Queue::display(){
    for(int i=front+1;i<=rear;i++){

        cout<<Q[i]<<"\t";
        
    }
    cout<<endl;
}


#endif 