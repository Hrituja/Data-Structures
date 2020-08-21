#include<stdio.h>
int main(){
    int a[20] = {3,7,9,9,12,6,1,11,2,10,11,11};
    int n=12,i,count,j;
    for(i=0;i<n-1;i++){
        count = 1;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
            count++;
            a[j] = -1;
            }

        }
        if(count>1 && a[i]>0){
            printf("%d %d\n",count,a[i]);
        }
    }
}

    
    