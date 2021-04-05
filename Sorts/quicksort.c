#include<stdio.h>

void swap(int *x, int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;   
}

int partition(int A[],int l,int h){
    int i=l, j=h;
    int pivot = A[l];
    do{
        do{i++;}while(A[i]<=pivot);
        do{j--;}while(A[j]>pivot);
        if(i<j)
            swap(&A[i],&A[j]);
    }while(i<j);
    swap(&A[l],&A[j]);
    return j;
    
}

void QuickSort(int A[],int l,int h){
    int j;
    if(l<h){
        j=partition(A,l,h);
        QuickSort(A,l,j);
        QuickSort(A,j+1,h);
    }
}


int main(){
    int A[]={3,7,9,10,6,5,12,4,11,2,999},n=11,i;
    QuickSort(A,0,11);
    for(i=0;i<10;i++)
        printf("%d\t",A[i]);

}