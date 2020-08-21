#include <stdio.h>


int main(){
    int i;
    int A[5]={2,4,6,8,10};
    int *p;
    p = (int*)malloc(5*sizeof(int));
    p[0] = 3;
    p[1] = 5;
    p[2] = 6;
    p[3] = 7;
    p[4] = 8;
    for(i=0;i<5;i++){

        printf("%d\n",A[i]);
    }
    for(i=0;i<5;i++){

        printf("%d\n",p[i]);
    }
}