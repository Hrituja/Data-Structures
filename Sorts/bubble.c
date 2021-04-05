#include<stdio.h>

void swap(int *x, int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;   
}

void BubbleSort(int A[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
                swap(&A[j+1],&A[j]);
            }
        }
        
    }
}
int main(){
    int A[]={3,7,9,10,6,5,12,4,11,2},n=10,i;
    BubbleSort(A,10);
    for(i=0;i<10;i++)
        printf("%d\t",A[i]);

}