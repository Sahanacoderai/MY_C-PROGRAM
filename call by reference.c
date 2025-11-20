#include<stdio.h>
int main(){
    int a=3, b=4;
    int *p1,*p2,temp;
    p1=&a;
    p2=&b;
    printf("before swapping %d %d\n",a,b);
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("after swapping %d %d\n",a,b);
    
}
