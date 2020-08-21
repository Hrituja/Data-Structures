#include<stdio.h>

int main(){
    int i,j;
    char A[] = "madam";
    char B[10];
    for(i=0;A[i]!='\0';i++){

    }
    i = i-1;
    for(j=0;i>=0;i--,j++){
        B[j] = A[i];
    }

    for(i=0,j=0;A[i]!='\0';i++,j++){
        if(!(A[i] == B[j])){
            return 0;
        }
        
    }
    printf("Palindrome");


}