//ToDO
#include<stdio.h>

int main(){
    char A[]="finding";
    long int H=0,x=1,i,y=0;
    for(i=0;A[i]!='\0';i++){
        x = x<<(A[i]-97);
        if(x&H>0){
            printf("%c is duplicate",A[i]);
            
        }
        else{
           H = x|H; 
        }
    }

}