#include<stdio.h>

int main(){
    char *s="welcome";
    int i,count=0;
    for(i=0;s[i]!='\0';i++){
        count++;
    }
    printf("%d",count);
}