#include<stdio.h>

int Max(int arr[],int size){
    int max = arr[0],i;
    for(i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int Min(int arr[],int size){
    int min = arr[0],i;
    for(i=0;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int main(){
    int A[20] = {6,3,8,10,16,7,5,2,9,14};
    int n=10,h,l,i,K=10;
    h = Max(A,n);
    l = Min(A,n);
    int H[h+1];
    for(i=0;i<n;i++){
        if(H[K-A[i]]!=0 && (K-A[i])>0){
            printf("%d,%d\n",A[i],K-A[i]);
        }
        H[A[i]]++;
    }
}