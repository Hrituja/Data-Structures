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

void Insert(struct Array *arr,int index,int x){
    int i;
    if(index>=0 && index <= arr->length){
        for( i = arr->length;i>index;i--)
           {
               arr->A[i] = arr->A[i-1];
           } 
    arr->A[index] = x;
    arr->length++;
    }  
}


void Delete(struct Array *arr,int index){
    int i,x;
    x = arr->A[index];
    if(index>=0 && index <=arr->length){
        for(i=index;i<arr->length-1;i++){
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
    }
}
void Append(struct Array *arr,int x){
    if(arr->length<arr->size){
         arr->A[arr->length++] = x;
    }

   
}


int main(){
 
    struct Array arr = {{1,2,3,4,5},20,5};
    int n,i;
    // printf("Enter size of an array");
    // scanf("%d",&arr.size);
    // arr.A = (int *)malloc(arr.size*sizeof(int));
    // arr.length = 0;
    // printf("Enter number of ele");
    // scanf("%d",&n);
    // printf("Enter ele");
    // for(i=0;i<n;i++){
    //     scanf("%d",&arr.A[i]);
    // }
    // arr.length =n;
    Append(&arr,10);    
    Insert(&arr,3,7);
    Delete(&arr,3);
    Display(arr);


}