#include <stdio.h>



int rec_sum(int n){
    if(n==0){
        return 0;
    }
    else{
       return rec_sum(n-1)+n;
    }
}

int loop_sum(int n){
    int i,s=0;
    for(i=0;i<=n;i++){
        s=s+i;
    }
    return s;

}

int formula_sum(int n){
    return((n*(n+1))/2); 
}
int main(){
    int x = rec_sum(5);
    int y = loop_sum(5);
    int z = formula_sum(5);
    printf("Recursive: %d ",x);
    printf("Loop: %d ",y);
    printf("Formula: %d ",z);
}