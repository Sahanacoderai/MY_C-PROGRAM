#include<string.h>
#include<stdio.h>
int main(){
    char str[50],rev[50];
    int i, len;
    printf("enter a string:");
    scanf("%s",str);
    len = strlen(str);
    for(i = 0; i< len; i++){
        rev[i] = str[len - i -1];
    }
    rev[len] = 0;
    if (strcmp(str, rev) == 0) {
        printf("the string is a palindrom.\n");
    
   } else{
        printf("the string is not a palindrom.\n");
    }
}
