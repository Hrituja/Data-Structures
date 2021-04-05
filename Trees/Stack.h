#include<stdio.h>
#include<stdlib.h>
#include "Queue.h"
#ifndef Stack_h
#define Stack_h

struct Stack{
    int size;
    int top;
    struct Node **S;
};


void StackCreate(struct Stack *st,int size){
    printf("Enter size\n");
    scanf("%d",&st->size);
    st->top = -1;
    st->S = (struct Node**)malloc(st->size * sizeof(struct Node *));
}


void push(struct Stack *st,struct Node* x){
    if(st->top == st->size-1){
        printf("Stack overflow");
    }
    else{
        st->top++;
        st->S[st->top] = x;
    }
}

struct Node* pop(struct Stack *st){
    struct Node* x=NULL;
        if(st->top == -1){
        printf("Stack underflow");
        return 0;
    }
    else{
        x = st->S[st->top];
        st->top--;
        return x;
    }

}

struct Node* peek(struct Stack st,int pos){
    struct Node* x=NULL;
    if(st.top - pos + 1 < 0){
        printf("Invalid Position\n");
    }
    else{
        x = st.S[st.top - pos + 1];
        return x;
    }
}

int isEmptyStack(struct Stack st){
    if(st.top == -1){
        return 1;
    }
    return 0;
}

int isFullStack(struct Stack st){
    if(st.top == st.size -1){
        return 0;
    }
    return 1;
}

#endif