#include <stdio.h>

int main(){
    int A[5];
    int B[5] = {2,4,6,8,10};
    int C[10] = {1,2,3};
    int D[5] = {0};
    int E[] =  {2,4,6,8,10,12};
    int i;
//  printf("%d\n",B[0]);
    // for(i=0;i<=5;i++){
    //     printf("%d\n",B[i]);
    // }
    // printf("********************");
    //   for(i=0;i<5;i++){
     
    //     printf("%d\n",i[B]);
      
    // }
    //   printf("********************");
    //   for(i=0;i<5;i++){

    //     printf("%d\n",*(B+i));
    // }
    for(i=0;i<5;i++){

        printf("%u\n",&A[i]);
    }


    return 0;
}