#include <stdio.h>
#include<stdlib.h>
struct Array{
    // int *A;
    int A[20];
    int size;
    int length;
};
void Display(struct Array arr){
    int i;
    printf("Elements are : \n");
        for(i=0;i<arr.length;i++){
        printf("%d\t\n",arr.A[i]);
    }

}

void Reverse1(struct Array *arr){
    int *B;
    int i,j;
    B = (int*)malloc(arr->length*sizeof(int));
    for(i=arr->length-1,j=0;i>=0;i--,j++){
        B[j] =  arr->A[i] ;
    }
    for(i=0;i<arr->length;i++){
        arr->A[i] = B[i];
    }

}
void Reverse2(struct Array *arr){
    int i,j,temp;
    for(i=0,j=arr->length-1;i<j;i++,j--)
    {   temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
    }
}

int main(){
    struct Array arr = {{1,2,3,4,5},20,5};
    int n,i,x;
    Reverse2(&arr);
    Display(arr);
    

}           