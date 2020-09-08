#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*first,*second = NULL,*third=NULL;


void create(int A[],int n){
    int i;
    struct Node *t,*last;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last= first;

    for(i=1;i<n;i++){
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void create2(int A[],int n){
    int i;
    struct Node *t,*last;
    second = (struct Node*)malloc(sizeof(struct Node));
    second->data = A[0];
    second->next = NULL;
    last= second;

    for(i=1;i<n;i++){
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}


void display(struct Node *p){
    while(p!=NULL){
        printf("%d",p->data);
        p=p->next;
    }
}

void display_recursive(struct Node *p){
    if(p!=NULL){
        printf("%d -> ",p->data);
        display_recursive(p->next);
        
    }
}


int count(struct Node *p){
    int count = 0;
    while(p){
        count++;
        p = p->next;
    }
    return count;
}

int rcount(struct Node *p){
    int count = 0;
    if(p){
        count = rcount(p->next)+1;
    }
    return count;
}


int sum(struct Node *p){
    int sum = 0;
    while(p){
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}

int rsum(struct Node *p){
    int sum = 0;
    if(p){
        sum = rsum(p->next) + p->data;
    }
    return sum;
}


int rmax(struct Node *p){
    int max = -32768;
    int x;
    if(p==0){
        return max;
    }
    else{
        x = rmax(p->next);
        return x > p->data? x : p->data;
    }
}

int max(struct Node *p){
    int max = -32768;
    while(p!=NULL){
        if(p->data > max){
            max = p->data;
            p = p->next;
        }
    }
    return max;

}

struct Node* search(struct Node * p,int key){
    while(p!=NULL){
        if(key==p->data)
            return p;
        p = p->next;
        

    }
    return NULL;
}

struct Node* Rsearch(struct Node * p,int key){
    struct Node *q = NULL;
    if(p==NULL){
        return NULL;
    }
    if(key==p->data)
        return p;
    return Rsearch(p->next,key);
       
}

struct Node* ImprovedSearch(struct Node * p,int key){
    struct Node *q = NULL;
    while(p!=NULL){
        if(key == p->data){
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q=p;
        p = p->next;
    }
       
}


void  InsertaAtBegin(struct Node *p,int x){
    struct Node *t;
    t->data = x;
    t->next = first;
    first = t;

}

void Insert(struct Node* p,int index,int x){
    struct Node *t;
    int i;
    if(index < 0 || index > count(p)){
        return;
    }
    t = (struct Node *)malloc(sizeof(struct Node));
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

void SortedInsert(struct Node* p,int x){
    struct Node*t,*q = NULL;
    t = (struct Node*)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;
    if(first==NULL)
        first = t;
    else{
        while(p && p->data <x){
            q = p;
            p = p->next;
        }   
        if(p==first){
            t->next = first;
            first = p;
        }
        else{
            t->next = q->next;
            q->next = t;
        }
    }

}

int isSorted(struct Node * p){
    int x = -32768;
    while(p!=NULL){
        if(p->data < x)
            return 0;
            x = p->data;
            p = p->next;
        
    }
    return 1;
}

void Delete(struct Node *p,int index){
    struct Node * q;
    int i,x = -1;

    if(index < 1 || index > count (p)){
        return ;
    }

    if(index==1){
        q = first;
        x = first->data;
        first = first->next;
        free(q);
        q = NULL;
    }
    else{
        for(i=0;i<index-1;i++){
            q = p;
            p = p->next;
        }
        if(p){
        q->next = p->next;
        x = p->data;
        free(p);
        p = NULL;
        }
 
    }
}

void RemoveDuplicate(struct Node *p){
    struct Node *q =    p->next;
    while(q!=NULL){
        if(p->data != q->data){
            p = q;
            q = q->next;
        }
        else{
            p->next = q->next;
            free(q);
            q = p->next;
        }
        
    }
}

void Reverse1(struct Node * p){
    int *A;
    int i=0;
    struct Node *q=p;
    A = (int *)malloc(count(p)*sizeof(int));
    while(q!=NULL){
        A[i] = q->data;
        q = q->next;
        i++;
    }
    q=p;
    i--;
    while(q!=NULL){
        q->data = A[i--];
        q = q->next;
    }

}

void Reverse2(struct Node *p){
    struct Node *q=NULL, *r=NULL;
    while(p!=NULL){
        r =q;
        q = p;
        p = p->next;
        q->next = r; 
    }
    first = q;

}

void Reverse3(struct Node *q,struct Node *p){
    if(p){
        Reverse3(p,p->next);
        p->next =q;
    }
    else{
        first = q;
    }
    
}

void Concat(struct Node*p,struct Node *q){
    third = p;
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = q;    
}

void Merge(struct Node *p, struct Node *q){
    struct Node *last;
    if(p->data < q->data){ //for first node of first list..if it is small
        third = last = p;
        p = p->next;
        last->next = NULL;
    }
    else{                     //for first node of SECOND list..if it is small
        third = last = q;
        q = q->next;
        last->next = NULL;
    }
    while(p!=NULL && q!=NULL){   //check for rest of nodes in both the list
        if(first->data <second->data){
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
        else{
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
    }
    if(p)
        last->next = p;
    if(q)
        last->next = q;
    

} 

int isLoop(struct Node *p){
    struct Node *q;
    p=q=first;
    do{
        p = p->next;
        q = q->next;
        q = q?q->next:q;
    }while(p && q && p!=q);
    if(p==q){return 1; }
    else{ return 0;}
}
int main(){
    struct Node *temp;
    struct Node *t1,*t2;
    int A[]={10,20,30,40,50};
    int B[]= {5,15,25,35,45 };
    int x;
    create(A,5);// can directly create a linked list with insert
    // SortedInsert(first,23);
    // RemoveDuplicate(first);
    // Reverse3(NULL,first);
    display_recursive(first);
    t1 = first->next->next;
    t2 = first->next->next->next->next; //can be done using loop
    t2->next = t1;
    printf("%d",isLoop(first));
    // Delete(first,4);
    // display_recursive(first);
    // printf("\n");
    // create2(B,5);
    // display_recursive(second);

    //  printf("\n");
    // Concat(first,second);
    // Merge(first,second);
    // display_recursive(third);

    // printf("No of nodes is %d\n",rcount(first));
    // printf("Sum of nodes is %d\n",sum(first));
    // printf("Max of nodes is %d\n",rmax(first));
    // temp = ImprovedSearch(first,7);
    // if(temp){
    //     printf("Key found is %d",temp->data);
    // }
    // else{
    //      printf("Key not found");
    // }
    // InsertaAtBegin(first,8);
    // x = isSorted(first);
    // printf("%d\n",x);

    
}