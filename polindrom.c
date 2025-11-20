#include<stdio.h>
int main(){
    int num,original,rem,rev=0;
    printf("enter the number:");
    scanf("%d",&num);
    
    original=num;
    while(num!=0){
        rem=rem%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(original==rev){
        printf("the number is polindrom");
    }
    else{
        
        printf("the number is not polindrom");
    }
}

    
