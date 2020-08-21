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

    for(i=0,j=0;A[i]!='\0';i++,j++){
        if(!(A[i]==A[j])){
            return 0;
        }
    }
    printf("Palindrome");
}
