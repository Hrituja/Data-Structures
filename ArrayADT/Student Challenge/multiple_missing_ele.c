#include<stdio.h>

int main(){
    int a[]={6,7,8,9,11,12,15,16,17,18,19};
    int diff = a[0] - 0,i,n=11;
    for(i=0;i<n;i++){
        if(diff!=a[i]-i){
            while(diff<a[i]-i){
                printf("%d\n",diff+i);
                diff++;
            }
        }
    }
}