#include<stdio.h>

int main(){
    char A[]="finding";
    int i,j,count=0,H[26];
    for(i=0;i<26;i++){
        H[i] = 0;
    }
    for(i=0;A[i]!='\0';i++){
        H[A[i]-97]++;
    }
    for(i=0;i<26;i++){
        if(H[i]>1){
            printf("%c occurs %d times\n",i+97,H[i]);
        }
    }

}