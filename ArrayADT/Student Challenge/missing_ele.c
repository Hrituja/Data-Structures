#include<stdio.h>



int main(){
    int i, a[] = {1,2,3,4,5,6,8,9};
    int n=8;
    int sum=0,s=0,l,res;
    l= a[n-1];

    sum = (l*(l+1))/2;
    
    for(i=0;i<n;i++){
        s = s+a[i];
    }

    res = sum - s;
    printf("%d",res);

}