#include<stdio.h>

int main(){
    char A[]= "welcome";
    char temp;
    int i,j;
        for(j=0;A[j]!='\0';j++){

    }
    j = j-1;
    
    for(i=0;i<j;i++,j--){
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
     printf("%s",A);
    }

    
    
    
