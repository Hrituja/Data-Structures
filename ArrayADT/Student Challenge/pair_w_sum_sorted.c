#include<stdio.h>

int main(){
     int a[20] = {1,3,4,5,6,8,9,10,12,14};
    int n=10,i,sum=10,j;
    i = 0;
    j = n-1;
    while(i<j){
        if(a[i]+a[j]==sum){
        printf("%d %d",a[i],a[j]);
        i++;
        j--;
    }
    else  if(a[i]+a[j]<sum){i++;}
    else if(a[i]+a[j]>sum){j--;}
    }



}