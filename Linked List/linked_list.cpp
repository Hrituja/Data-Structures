#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

class LinkedList{
    private:
    Node *first;
    public:
    LinkedList(){
        first = NULL;
    }
    LinkedList(int A[],int n);
    ~LinkedList(){delete first;}

    void Display();
    void Insert(int index, int x);
    int Delete(int index);
    int Count();


};


LinkedList::LinkedList(int A[],int n){
     Node *t,*last;
     int i=0;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last= first;

    for(i=1;i<n;i++){
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}


void LinkedList::Display(){
    Node *p = first;
    while(p!=NULL){
        cout<<p->data<< "-> ";
        p=p->next;
    }
    cout<<endl;
}

void LinkedList::Insert(int index,int x){
        Node *p = first;
     Node *t;
    int i = 0;
    if(index < 0 || index > Count()){
        return;
    }
    t = new Node; 
    t->data = x;
    if(index == 0){
        t->next = first;
        first  = t;
    }
    else{
        for(i=0;i<index-1;i++){
            p=p->next;   
        }
        t->next = p->next;
        p->next = t;
    }
}

int LinkedList::Count(){
    Node *p = first;
        int count = 0;
    while(p){
        count++;
        p = p->next;
    }
    return count;
}

int LinkedList::Delete(int index){
    Node *p,*q=NULL;
    int x=-1;
    if(index < 1 || index > Count())
        return -1;
    if(index == 1){
        p = first;
        first = first->next;
        x = p->data;
        delete p;

    }
    else{
        for(int i=0;i<index-1;i++){
            q=p;
            p = p->next;
        }
        if(p){
        q->next = p->next;
        x= p->data;
        delete p;
        }


    }
    return x;   

}


int main(){
    LinkedList l;
    int num;
    int A[]={3,5,7,10,15};
    cout<<"How many nodes do you wanna add?\n";
    cin>>num;
    int x=0,index;
    for(int i=0;i<num;i++){
        cin>>x;
        l.Insert(i,x);
    }
    l.Display();
    cout<<"Number of nodes are"<<l.Count()<<endl;


    cout<<l.Delete(2);
    l.Display();
    
   
}