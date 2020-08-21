#include<stdio.h>

int main(){
    int a[20] = {3,7,9,9,12,6,1,11,2,10,11,11};
    int n=11,j,i,lastDuplicate=0;

    for(i=0;i<n;i++){
            if(a[i]==a[i+1]){
                j = i+1;
                
        printf("%d %d\n",a[i],j);
        i = j-1;
    }
    }


    
    
}