#include<stdio.h>
#include<string.h>
int main(){
    char name[10];
    printf("enter your number");
    scanf("%s",&name);
    strcat(name,"sk");
    printf("%s",name);
}
