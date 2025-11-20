#include<stdio.h>
int main(){
    int ar[5]={10,20,30,40,50,};
    int *p=ar;
    for(int i=0; i<=4; i++){
    printf("%d",*p);
    p++;
}
}
