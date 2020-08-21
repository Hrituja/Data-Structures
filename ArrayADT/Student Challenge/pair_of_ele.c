#include<stdio.h>

int main(){
     int a[20] = {6,3,8,10,16,7,5,2,9,14};
    int n=10,i,sum=10,j;
    for(i = 0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
                printf("%d %d\n",a[i],a[j]);
            }
        }
    }
}