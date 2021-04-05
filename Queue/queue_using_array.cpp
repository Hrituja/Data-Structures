#include<iostream>

using namespace std;

class Queue{
    private:
        int size;
        int front;
        int rear;
        int *Q;
    public:
        Queue(int size);
        void create(int size);
        void enqueue(int x);
        int dequeue();
        void display();
};



Queue::Queue(int size){
    size = this->size;
    front = -1;
    rear = -1;
    Q = new int[size];
}

void Queue::enqueue(int x){

    if(rear == size-1){
        cout<<"Queue full\n";
    }
    else{
        rear++;
        Q[rear] = x;
    }

}



int Queue::dequeue(){
    int x;
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

int main(){
    Queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.display();
    cout<<q.dequeue();
    q.display();
    return 0;
}