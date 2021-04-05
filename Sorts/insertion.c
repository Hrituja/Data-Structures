#include<stdio.h>

void swap(int *x, int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;   
}

void InsertionSort(int A[], int n){
    int i,j,x;
    for(i=1;i<n;i++){
        j=i-1;
        x=A[i];
        while(A[j]>x && j>-1){
            A[j+1] = A[j];
            j--;
        }
        A[j+1]=x;
    }
}
int main(){
    int A[]={3,7,9,10,6,5,12,4,11,2},n=10,i;
    InsertionSort(A,10);
    for(i=0;i<10;i++)
        printf("%d\t",A[i]);

}