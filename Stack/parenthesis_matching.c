#include<stdio.h>
#include<stdlib.h>

struct Node{
    char data;
    struct Node *next;
}*top=NULL;

void push(char x){
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

char pop(){
    char x = -1 ;
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

int isBalanced(char *exp){
    int i;
    for (int i=0;exp[i]!='\0'; i++){
        if (exp[i] == '('){
            push(exp[i]);
        } else if (exp[i] == ')'){
            if (top==NULL){
                return 0;
            } else {
                pop();
            }
        }
    }
    return top==NULL ? 1 : 0;
}

int main(){
    char E[] = "((a+b)*(c-d))";
    printf("%d",isBalanced(E));
    char F[] = "((a+b)*(c-d)))";
    printf("%d",isBalanced(F));
 
    char G[] = "(((a+b)*(c-d))";
    printf("%d",isBalanced(G));
   

}