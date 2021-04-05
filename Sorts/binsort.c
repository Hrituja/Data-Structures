#include<iostream>
#include<stdlib.h>

int findMax(int A[],int n)
{
    int max=-65335;
    int i;
    for(i=0;i<n;i++)
        {
        if(A[i]>max)
        max=A[i];
        }
    return max;
}

class Node{
    public:
    int data;
    Node * next;
};

void in