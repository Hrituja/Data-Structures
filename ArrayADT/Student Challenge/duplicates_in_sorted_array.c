#include<stdio.h>

int main(){
    int a[20] = {3,7,9,9,12,6,1,11,2,10,11,11};
    int n=11,h,l,i,lastDuplicate=0;

    for(i=0;i<n;i++){
            if(a[i]==a[i+1]&&a[i]!=lastDuplicate){
        printf("%d",a[i]);
        lastDuplicate = a[i];
    }
    }


    
    
}