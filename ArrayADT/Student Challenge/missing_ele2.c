#include<stdio.h>

int main(){
    int i, a[] = {1,2,3,4,5,6,8,9};
    int n=8,l,h,diff;
    l = a[0];
    h = a[n-1];
    diff = l-0;
    for(i=0;i<n;i++){
        if(a[i]-i!=diff){
            printf("%d\n",i+diff);
            break;
        }
    }


}