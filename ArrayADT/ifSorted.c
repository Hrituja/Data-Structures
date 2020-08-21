#include<stdio.h>

struct Array{
    int A[20];
    int length;
    int size;
};

int IsSorted(struct Array arr){
    int i;
    for(i=0;i<arr.length-1;i++){
        if(arr.A[i]>arr.A[i+1])
            return 0;
        
    }
    return 1;
    

}



int main(){
    struct Array arr = {{1,2,3,4,5},5,20}; 
     
    printf("%d",IsSorted(arr));
    


}