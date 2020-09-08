#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct Node{
    int coeff;
    int exp;
    struct Node *next;
}*poly=NULL;

void create(){
    struct Node *t,*last;
    int i,num;
    printf("Enter num of terms\n");
    scanf("%d",&num);
    printf("Enter each term with coeff and exp\n");
    for(i=0;i<num;i++){
        t = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d %d",&t->coeff,&t->exp);
        t->next = NULL;
        if(poly==NULL){
            poly=last=t;
        }
        else{
            last->next=t;
            last=t;
        }
    }
    
}

void display(struct  Node* p){
    while(p){
        printf("%dx%d+",p->coeff,p->exp);
        p = p->next;
    }
    printf("\n");
}

int evaluate(struct Node *p,int x){
    int val;
    while(p){
        val += p->coeff* pow(x,p->exp);
        p = p->next;
    }
    return val; 

}

int main(){

    create();
    display(poly);
    printf("%d",evaluate(poly,1));

}