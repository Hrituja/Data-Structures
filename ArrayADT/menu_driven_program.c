#include<stdio.h>
#include<stdlib.h>

struct Array{
    int A[20];

    int length;
    int size;
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

int IsSorted(struct Array arr){
    int i;
    for(i=0;i<arr.length-1;i++){
        if(arr.A[i]>arr.A[i+1])
            return 0;
        
    }
    return 1;
    

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

// void PosNeg(struct Array *arr){
//     int i=0,j=arr->length-1;
//     while(i<j){
//     while(arr->A[i]<0){i++;}
//     while(arr->A[j]>=0){j--;}
//     if(i<j){
//         swap(&arr->A[i],&arr->A[j]);
//     }
//     }
// }

void Reverse1(struct Array *arr){
    int *B;
    int i,j;
    B = (int*)malloc(arr->length*sizeof(int));
    for(i=arr->length-1,j=0;i>=0;i--,j++){
        B[j] =  arr->A[i] ;
    }
    for(i=0;i<arr->length;i++){
        arr->A[i] = B[i];
    }

}
void Reverse2(struct Array *arr){
    int i,j,temp;
    for(i=0,j=arr->length-1;i<j;i++,j--)
    {   temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
    }
}

void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

struct Array * Union(struct Array *arr1, struct Array *arr2){
    int i,j,k;
    i=j=k=0;

 struct Array *arr3=(struct Array *)malloc(sizeof(struct
Array));

    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else if(arr2->A[j]<arr1->A[i])
             arr3->A[k++] = arr2->A[j++];  
        else
        {
             arr3->A[k++] = arr1->A[i++];
             j++;
        }
           
        
    }
    for(;i<arr1->length;i++)
        arr3->A[k++] = arr1->A[i];
    for(;j<arr2->length;j++)
        arr3->A[k++] = arr2->A[j];
    arr3->length = k;
    arr3->size = 10;
    return arr3;
}

struct Array * Intersection(struct Array *arr1, struct Array *arr2){
    int i,j,k;
    i=j=k=0;

 struct Array *arr3=(struct Array *)malloc(sizeof(struct
Array));

    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j])
            i++;
        else if(arr2->A[j]<arr1->A[i])
             j++;  
        else if(arr1->A[i] == arr2->A[j])
        {
             arr3->A[k++] = arr1->A[i++];
             j++;
        }
           
        
    }
    arr3->length = k;
    arr3->size = 10;
    return arr3;
}

struct Array * Difference(struct Array *arr1, struct Array *arr2){
    int i,j,k;
    i=j=k=0;

 struct Array *arr3=(struct Array *)malloc(sizeof(struct
Array));

    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else if(arr2->A[j]<arr1->A[i])
             j++;  
        else
        {
             i++;
             j++;
        }
           
        
    }
    for(;i<arr1->length;i++)
        arr3->A[k++] = arr1->A[i];

    arr3->length = k;
    arr3->size = 10;
    return arr3;
}

int main(){
    struct Array arr1;
    int ch,x,index;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
    printf("Enter size of array\n");
    scanf("%d",&arr1.size);
    arr1 = (int*)malloc(arr1.size*sizeof(int));

    printf("Menu");
    printf("1.Display\n");
    printf("2.Insert\n");
    printf("3.Delete\n");
    printf("4.Append\n");

    switch (ch)
    {
    case 1:
        Display(arr1);
        break;
    case 2:
        
        printf("Enter a number to insert in array\n");
        scanf("%d",&x);
         printf("Enter a index to insert a number\n");
        scanf("%d",&index);
        Insert(&arr1,index,x);
    
    default:
        break;
    }

                                        

}