#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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

int precedence(char x){
    if(x=='+'||x=='-'){
        return 1;
    }
    else if(x=='*'||x=='/'){
        return 2;
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

int Eval(char *postfix){
    int i=0;
    int x1,x2,r;
    for(i=0;postfix[i]!='\0';i++){
        if(isOperand(postfix[i])){
            push(postfix[i]-'0');
        }
        else{
            x2 = pop();
            x1 = pop();
            switch (postfix[i])
            {
            case '+':r = x1+x2;break;
            case '-':r = x1-x2;break;
            case '*':r = x1*x2;break;
            case '/':r = x1/x2;break;
            
        }
        push(r);
    }
}
return top->data;
}

int main(){
    
    
    char *postfix = "234*+82/-";//10
    printf("%d",Eval(postfix));

}