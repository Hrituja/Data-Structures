#include<stdlib.h>
#include<stdio.h>

void Insert(int A[],int n){
    int i=n, temp;
    temp = A[i];
    while(i>1 && temp > A[i/2]){
        A[i] = A[i/2];
        i= i/2;

    }
    A[i] = temp;
}

int Delete(int A[],int n){
    int i,j,x,t,val;
    val = A[1];
    A[1] = A[n];
    A[n] = val;
    i=1;j=i*2;

    while(j<n-1){
        if(A[j+1]>A[j])
            j=j+1;
        if(A[i]<A[j]){
            t = A[i];
            A[i] = A[j];
            A[j] = t;
            i=j;
            j  = 2*j;
        }
        else
            break;
    }
    return val;
}

int main(){
    int H[]  = {0,10,20,30,25,5,40,35};
    //40,25,35,10,5,20,30
    int i;
    for(i=1;i<=7;i++)
    Insert(H,i);





    printf("\nDeleted value is %d\n",Delete(H,7));
    for(i=1;i<=7;i++)
    printf("%d",H[i]);



    return 0;    
}