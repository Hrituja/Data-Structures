#include <stdio.h>
#include<stdlib.h>
struct Array{
    // int *A;
    int A[20];
    int size;
    int length;
};

void swap(int *x,int *y){
    int t;
    t=*x;
    *x = *y;
    *y = t;

}

int LinearSearch(struct Array *arr,int key){
    int i;
    for(i=0;i<arr->length;i++){
        if(key==arr->A[i])
            swap(&arr->A[i],&arr->A[i-1]);
            return i;
    }
    return -1;
}

int main(){
    struct Array arr = {{1,2,3,4,5},20,5};
    int n,i,x;
    x = LinearSearch(&arr,3);
    printf("%d ",x);

}