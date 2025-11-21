#include<stdio.h>
#include<stdlib.h>
int main(){
    int *sah = (int*) malloc (5*sizeof(int));
    *sah=10;
    printf("%d",*sah);
    
}
