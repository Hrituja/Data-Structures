#include<stdio.h>
#define SIZE 10


int hash(int key){
    return key%SIZE;
}

int probe(int H[],int key){
    int index = hash(key);
    int i=0;
    while (H[(index+i*i)%SIZE]!=0)
        i++;
    return (index+i)%SIZE;
}


void Insert(int H[],int key){
    int index = hash(key);
    if(H[index]!=0){
        index = probe(H,key);
    }
    H[index] = key;

}

int Search(int H[],int key){
    int index = hash(key);
    int i=0;
    while (H[(index+i*i)%SIZE]!=key)
    {
        i++;
    }
    return index+i;
    
}

int main(){

    int HT[10]={0},x;
    Insert(HT,12);
    Insert(HT,25);
    Insert(HT,35);
    Insert(HT,26);
    x=Search(HT,25);
    printf("%d",x);



}