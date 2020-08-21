#include<stdio.h>

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

void PosNeg(struct Array *arr){
    int i=0,j=arr->length-1;
    while(i<j){
    while(arr->A[i]<0){i++;}
    while(arr->A[j]>=0){j--;}
    if(i<j){
        swap(&arr->A[i],&arr->A[j]);
    }
    }
}



int main(){
    struct Array arr = {{1,-2,3,-4,5,-6,7,-8},8,20}; 
     
    PosNeg(&arr);
    Display(arr);
    


}