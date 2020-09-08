#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;;
    struct Node *next;
}*top=NULL;



void push(int x){
    struct Node *t;
    t = (struct Node*)malloc(sizeof(struct Node));

    if(t==NULL){
        printf("Stack Overflow\n");
    }
    else{
        t->data=x;
        t->next = top;
        top = t;
    }
}

int pop(){
    int x =-1;
    struct Node *p;
    if(top==NULL){
        printf("Stack Overflow\n"); 
    }
        else{
            p = top;
            top = top->next;
            x = p->data;
            
            free(p);
    }
    return x;

}

void Display(){
    struct Node * p = top;
    while(p!=NULL){
        printf("%d",p->data);
         p=p->next;
    }
   
}

int peek(int pos){
    struct Node *p=top;
    int x =-1,i;
    for(i=0;i<pos-1&&p!=NULL ;i++){
        p = p->next;
    }
    if(p!=NULL){
        printf("%d",p->data);
    }
    else{
        return 0;
    }

}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    Display();
    printf("%d",pop());



}