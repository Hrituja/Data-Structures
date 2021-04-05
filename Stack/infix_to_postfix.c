#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
    char x =-1;
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

int precedence(char x){
    if(x=='+'||x=='-'){
        return 1;
    }
    else if(x=='*'||x=='/'){
        return 1;
    }
    else{
        return 0;
    }
}

int isOperand(char x){
    if(x=='+'||x=='-'||x=='*'||x=='/'){
        return 0;
    }
    return 1;
}

char* infixToPostfix(char *infix){
    int i=0,j=0;
    char *postfix;
    int len = strlen(infix);
    postfix = (char *)malloc((len+2)*sizeof(char));

    while(infix[i]!='\0'){
        if(isOperand(infix[i])){
            postfix[j++]=infix[i++];
        }
        else{
            if(precedence(infix[i])> precedence(top->data)){
                push(infix[i++]);
            }
            else{
                postfix[j++] = pop();
            }
        }
    }

    while (top!=NULL)
        postfix[j++]=pop();
    postfix[j] = '\0';
    
    return postfix;
}


int main(){
    char *infix = "a+b*c";
    push('#');
    
    char *postfix = infixToPostfix(infix);
    printf("%s",postfix);

}