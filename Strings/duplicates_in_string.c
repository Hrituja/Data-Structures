//todo
#include<stdio.h>

int main(){
    char s[]="finding";
    int i,j,count=0;

    for(i=0;s[i]!='\0';i++){
        for(j=i+1;s[i]!='\0';j++){
            if((s[i]==s[j])){
                count++;
            }

        }

       
    }
}
