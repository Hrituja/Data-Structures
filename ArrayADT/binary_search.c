#include <stdio.h>
#include<stdlib.h>
struct Array{
    // int *A;
    int A[20];
    int size;
    int length;
};

int BinarySearchIterative(struct Array arr,int key){//when we need to modify use pointer...when we just need to access just calling is sufficient
int l,h,mid;
l = 0;
h = arr.length-1;

while(l<=h){
    mid = (l+h)/2;
    if(arr.A[mid]==key){
        return mid;
    }
    else if(key<arr.A[mid]){
            h = mid-1;
    }
    else{
         l = mid+1;
    } 
    }
    return -1;

}

int BinarySearchRecursive(struct Array arr,int l,int h,int key){
    int mid;
    if(l<=h){
        mid = (l+h)/2;
        if(key==arr.A[mid]){
            return mid;
        }
        else if (key > arr.A[mid])
        {
           BinarySearchRecursive(arr,mid+1,h,key);
        }
        else{
            BinarySearchRecursive(arr,l,mid-1,key);
        }
        
    }
    return -1;
}

int main(){
    struct Array arr = {{1,2,3,4,5},20,5};
    int n,i,x;
    x = BinarySearchIterative(arr,2);
    printf("%d \n",BinarySearchIterative(arr,10));
    printf("%d \n",BinarySearchRecursive(arr,0,arr.length-1,3));

}