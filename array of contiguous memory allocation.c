#include<stdio.h>
#include<stdlib.h>
int main(){
int * sah;
sah =(int*)calloc(5,sizeof(int));
for(int i=0; i<5; i++){
    printf("enter number\n");
    scanf("%d\n",sah[i]);
}
}

