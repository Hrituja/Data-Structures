#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
}*Head;


void Create(int A[],int n){
    int i;
    struct Node *t,*last;
    Head = (struct Node *)malloc(sizeof(struct Node));
    Head->data = A[0];
    Head->next =Head;
    last = Head;
    for(i=1;i<n;i++){
        t = (struct Node *)malloc(sizeof(struct Node* ));
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}  

void Display(struct Node *h){
    do{
            printf("%d->",h->data);
            h = h->next;
    }while(h!=Head);
    printf("\n");
}


void Rdisplay(struct Node *h){
    static int flag = 0;
    if(h!=Head || flag ==0){
        flag = 1;
        printf("%d->",h->data);
        Rdisplay(h->next);
    }
    flag =0;
}

void Insert(struct Node *h,int index,int x){
    struct Node *t;
    int i;
    h = Head;
    if(index==0){
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data =x;
        while(h->next != NULL){
            h = h->next;
        }
        h->next = t;
        t->next = h;
    }
    else{
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data =x;
        for(i=0;i<index-1;i++){
            h = h->next;
        }
        t->next = h->next;
        h->next = t;
    }
}


int Length(struct Node *h){
    int count = 0;
    while(h->next!=Head){
        count ++;
        h = h->next;
    }
    return count;
}

void Delete(struct Node *h,int index){
    struct Node *t,*q;
    int i,x;
    h = Head;
    if(index==0){
       while(h->next !=Head){
           h = h->next;
        h->next = Head->next;
        x = Head->data;
        free(Head);
        Head = h->next;

       }
        
    }
    else{
        
        h = Head;
        for(i=0;i<index-1;i++){
            q = h;
            h = h->next;
        }
        q = h->next;
        x = q->data;
        h->next = q->next;
        free(q);
        q = NULL;



    }
}


int main(){
    int A[]={2,3,4,5,6};
    Create(A,5);
    Insert(Head,5,27);
    Rdisplay(Head);
    printf("%d\n",Length(Head));
    Delete(Head,5);
    Display(Head);

    return 0;
}