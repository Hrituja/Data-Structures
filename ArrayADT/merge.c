#include<stdio.h>
#include<stdlib.h>

struct Array{
    int A[20];

    int length;
    int size;
};

void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void Display(struct Array arr){
    int i;
    printf("Elements are : \n");
        for(i=0;i<arr.length;i++){
        printf("%d\t\n",arr.A[i]);
    }

}

struct Array * merge(struct Array *arr1, struct Array *arr2){
    int i,j,k;
    i=j=k=0;

 struct Array *arr3=(struct Array *)malloc(sizeof(struct
Array));

    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else
             arr3->A[k++] = arr2->A[j++];  
    }
    for(;i<arr1->length;i++)
        arr3->A[k++] = arr1->A[i];
    for(;j<arr2->length;j++)
        arr3->A[k++] = arr2->A[j];
    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;
    return arr3;
}



int main(){
    struct Array arr1 = {{1,2,3,4,5},5,20}; 
    struct Array arr2 = {{6,7,8,9,10},5,20};
    struct Array *arr3;
     
    arr3 = merge(&arr1,&arr2);
    Display(*arr3);
    


}