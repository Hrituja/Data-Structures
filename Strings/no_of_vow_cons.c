#include<stdio.h>

int main(){
    char s[]= "welcome";
    int i,vcount=0,ccount=0;
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            vcount++;
        }
        else if((s[i]>=97 && s[i]<=122 )|| (s[i]>=65 && s[i]<=90) ){
            ccount++;
        }
    }
    printf("Vowels: %d",vcount);
    printf("Consonants: %d",ccount);
}