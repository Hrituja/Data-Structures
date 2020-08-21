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
    int A[20] = {3,7,9,9,12,6,1,11,2,10,11,11};
    int n=12,h,l,i;
    h = Max(A,n);
    l = Min(A,n);
    int H[h+1];
    for(i=0;i<h+1;i++){
        H[i] = 0;
    }
    for(i=0;i<=n;i++){
        H[A[i]]++;
    }
    for(i=l;i<h;i++){
        if(H[i]>1){
            printf("%d %d",i,H[i]);
        }
    }

    
    
}