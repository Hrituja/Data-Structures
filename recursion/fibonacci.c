#include<stdio.h>

int fib(int n){
    if(n<=1){
        return n;
    }
    else{
        return fib(n-2) + fib(n-1);
    }
}

int fast_fib(int n){
    int f[n],i;
    for(i=0;i<n;i++){
        f[i] = -1;
    }
        if(n<=1){
        return n;
    }
    else
    {
        if(f[n-2] == -1){
            f[n-2] = fast_fib(n-2);
        }
                if(f[n-1] == -1){
            f[n-1] = fast_fib(n-1);
        }

        return fast_fib(n-2)+fib(n-1);
    }

}
    

    






int main(){
    int x = fib(5);
    int y = fast_fib(5);
    printf("%d",x);
    printf("%d",y);

}