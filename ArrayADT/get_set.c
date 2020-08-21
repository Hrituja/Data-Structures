#include <stdio.h>
#include<stdlib.h>
struct Array{
    // int *A;
    int A[20];
    int size;
    int length;
};

int Get(struct Array arr,int index){
    if(index>=0 && index<= arr.length-1){
        return arr.A[index];
    }
}
void Set(struct Array *arr,int index,int x){ //we need to pass a pointer to array as we are changing value at a given index
    if(index>=0 && index<= arr->length-1){
        arr->A[index] = x;
    }
}

int Max(struct Array arr){
    int max = arr.A[0],i;
    for(i=0;i<arr.length;i++){
        if(arr.A[i]>max){
            max = arr.A[i];
        }
    }
    return max;
}

int Min(struct Array arr){
    int min = arr.A[0],i;
    for(i=0;i<arr.length;i++){
        if(arr.A[i]<min){
            min = arr.A[i];
        }
    }
    return min;
}

int Sum(struct Array arr){
    int i,sum=0;
    for(i=0;i<arr.length;i++){
        sum=sum+arr.A[i];
    }
    return sum;
}

int Average(struct Array arr){
    return Sum(arr)/arr.length;
}



int main(){
    struct Array arr = {{1,2,3,4,5},20,5};
    int n,i,x;
    // printf("%d\n ",Get(arr,3));
    Set(&arr,3,27);
    printf("%d\n ",Average(arr));

}