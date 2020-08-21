#include<stdio.h>

int rec_fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return rec_fact(n-1)*n;
    }
}


int iter_fact(int n){
    int i,s=1;
        if(n==0){
        return 1;
    }
    else{
        for(i=1;i<=n;i++){
            s = s*i;
        }
        return s;
    }


}

int main(){
    int x = rec_fact(4);
    int y = iter_fact(4);
    printf("%d",x);
    printf("%d",y);

}