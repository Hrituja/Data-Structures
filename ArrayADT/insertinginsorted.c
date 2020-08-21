#include<stdio.h>

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

void InsertInSorted(struct Array *arr,int x){
    int i= arr->length-1;
    if(arr->length == arr->size){
        return;
    }
    while(i>=0 && arr->A[i]>x){
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = x;
    arr->length++;
}



int main(){
    struct Array arr = {{1,2,3,4,12},20,5};
    InsertInSorted(&arr,6);
    Display(arr);


}