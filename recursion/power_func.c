#include<stdio.h>

int poww(int m,int n){
    if(n==0){
        return 1;
    }
    else{
        return poww(m,n-1)*m;
    }
}


int fast_pow(int m,int n){

        if(n==0){
        return 1;
    }
    if(n%2 == 0){
        return fast_pow(m*m, n/2);
    }
    else{
        return m*fast_pow(m*m,(n-1)/2);
    }



}

int main(){
    int x = poww(2,4);
    int y = fast_pow(2,4);
    printf("%d",x);
    // printf("%d",y);

}