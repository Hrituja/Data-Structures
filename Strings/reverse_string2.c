#include<stdio.h>

int main(){
    char A[]= "welcome";
    char B[10];
    int i,j;
        for(i=0;A[i]!='\0';i++){

    }
    i = i-1;
    
    for(j=0;i>=0;i--,j++){
        B[j] = A[i];
    }
    B[j] = '\0';
     printf("%s",B);
    }