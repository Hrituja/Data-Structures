#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
    struct Node * prev;
}*first = NULL;


void Create(int A[],int n){
    int i;
    struct Node *t,*last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->prev = first->next = NULL;
    last = first;
    for(i=1;i<n;i++){
        t = (struct Node *)malloc(sizeof(struct Node* ));
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}  

void Display(struct Node *p){
    do{
            printf("%d->",p->data);
            p = p->next;
    }while(p!=NULL);
    printf("\n");
}


void Rdisplay(struct Node *p){
    static int flag = 0;
    if(p!=NULL){
        flag = 1;
        printf("%d->",p->data);
        Rdisplay(p->next);
    }
    flag =0;
}

void Insert(struct Node *p,int index,int x){
    struct Node *t;
    int i;
    p = first;
    if(index==0){
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data =x;
        t->next = p;
        p->prev = t;
        t->prev = NULL;
    }
    else{
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data =x;
        for(i=0;i<index-1;i++){
            p = p->next;
        }
        t->next = p->next;
        t->prev = p;
        if(p->next){
            p->next->prev = t;
        }
        p->next = t;
        
    }
}

int Length(struct Node *p){
    int count = 0;
    while(p!=NULL){
        count ++;
        p = p->next;
    }
    return count;
}

int main(){
    int A[]={2,3,4,5,6};
    Create(A,5);
    Insert(first,3,27);
    Length(first);
    Display(first);

    return 0;
}