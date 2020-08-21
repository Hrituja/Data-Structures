#include<stdio.h>

int main(){
    char s[]= "welcome";
    int i,vcount=0,ccount=0;
    for(i=0;s[i]!='\0';i++){
        if(!((s[i]>=97 && s[i]<=122 )|| (s[i]>=65 && s[i]<=90) ||(s[i]>=48 && s[i]<=90==57))  ){
          return 0;
    }
    }

    printf("Valid");
    
    
}