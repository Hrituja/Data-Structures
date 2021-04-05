#include<stdio.h>

void swap(int *x, int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;   
}

void Merge(int A[],int l,int mid,int h){
    int i=l,j=mid+1,k=l;
    int B[100];
    while (i<=mid && j<=h)
    {
        if(A[i]<A[j])
            B[k++] = A[i++];
        else
            B[k++]= A[j++];
       
    }
    for(;i<=mid;i++)
        B[k++] = A[i];
    for(;j<=h;j++)
        B[k++] = A[j];
    for(i=l;i<=h;i++)
        A[i] = B[i]; 
      
}

void IMergeSort(int A[],int n){
    int p,i,l,mid,h;
   
    for(p=2;p<=n;p=p*2){
        for(i=0;i+p-1<n;i=i+p){
            l=i;
            h=p+i-1;
            mid = (l+h)/2;
            Merge(A,l,mid,h);
        }
    }
            if(p/2<n){
            Merge(A,0,p/2-1,n-1);
        }

}

void RMergeSort(int A[],int l,int h){
    int mid;
    if(l<h){
        mid = (l+h)/2;
        RMergeSort(A,l,mid);
        RMergeSort(A,mid+1,h);
        Merge(A,l,mid,h);

    }
}





int main(){
    int A[]={3,7,9,10,6,5,12,4,11,2},n=10,i;
    RMergeSort(A,0,9);
    for(i=0;i<=9;i++)
        printf("%d\t",A[i]);

}